/*
** EPITECH PROJECT, 2019
** PSU my_ls
** File description:
** ld l
*/

#include "my_ls.h"

void print_type(int type)
{
    if (type == 8)
        my_putchar('-');
    if (type == 4)
        my_putchar('d');
    if (type == 10)
        my_putchar('l');
}

void print_rights(mode_t timer)
{
    (timer & S_IRUSR) ? my_putchar('r') : my_putchar('-');
    (timer & S_IWUSR) ? my_putchar('w') : my_putchar('-');
    (timer & S_IXUSR) ? my_putchar('x') : my_putchar('-');
    (timer & S_IRGRP) ? my_putchar('r') : my_putchar('-');
    (timer & S_IWGRP) ? my_putchar('w') : my_putchar('-');
    (timer & S_IXGRP) ? my_putchar('x') : my_putchar('-');
    (timer & S_IROTH) ? my_putchar('r') : my_putchar('-');
    (timer & S_IWOTH) ? my_putchar('w') : my_putchar('-');
    (timer & S_IXOTH) ? my_putchar('x') : my_putchar('-');
    my_putchar(' ');
}

void boxwhile(struct stat sb)
{
    struct passwd *pwd = getpwuid(sb.st_uid);
    struct group *grp = getgrgid(sb.st_gid);

    print_rights(sb.st_mode);
    my_put_nbrld(sb.st_nlink);
    my_putchar('\t');
    my_putstr(pwd->pw_name, 1);
    my_putstr(grp->gr_name, 1);
    my_put_nbrld(sb.st_size);
    my_putchar('\t');
    my_putstrtime(ctime(&sb.st_mtime));
}

void ls_l(char *path)
{
    DIR *dir = opendir(path);
    struct dirent *box;
    struct stat sb;

    box = ls_file_l(path);
    box = readdir(dir);
    while (box != NULL) {
        stat(my_strcat(my_strcat(path, "/"), box->d_name), &sb);
        if (box->d_name[0] != '.') {
            print_type(box->d_type);
            boxwhile(sb);
            my_putstr(box->d_name, 1);
            my_putchar('\n');
        }
        box = readdir(dir);
    }
    closedir(dir);
    exit (0);
}