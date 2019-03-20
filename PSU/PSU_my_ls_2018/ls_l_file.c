/*
** EPITECH PROJECT, 2019
** PSU my_ls
** File description:
** ld l
*/

#include "my_ls.h"

void print_type_file(struct stat sb)
{
    if (S_ISDIR(sb.st_mode) == 1)
        my_putchar('d');
    else if (S_ISLNK(sb.st_mode) == 1)
        my_putchar('l');
    else
        my_putchar('-');
}

void print_rights_file(mode_t timer)
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

void boxwhile_file(struct stat sb, struct passwd *pwd, struct group *grp)
{
    print_rights_file(sb.st_mode);
    my_put_nbrld(sb.st_nlink);
    my_putchar('\t');
    my_putstr(pwd->pw_name, 1);
    my_putstr(grp->gr_name, 1);
    my_put_nbrld(sb.st_size);
    my_putchar('\t');
    my_putstrtime(ctime(&sb.st_mtime));
}

void ls_l_file(char *path)
{
    struct stat sb;
    struct passwd *pwd;
    struct group *grp;

    stat(path, &sb);
    pwd = getpwuid(sb.st_uid);
    grp = getgrgid(sb.st_gid);
    print_type_file(sb);
    boxwhile_file(sb, pwd, grp);
    my_putstr(path, 1);
    my_putchar('\n');
}

void ls_lr_file(char *path, char *name)
{
    struct stat sb;
    struct passwd *pwd;
    struct group *grp;

    stat(path, &sb);
    pwd = getpwuid(sb.st_uid);
    grp = getgrgid(sb.st_gid);
    print_type_file(sb);
    boxwhile_file(sb, pwd, grp);
    my_putstr(name, 1);
    my_putchar('\n');
}