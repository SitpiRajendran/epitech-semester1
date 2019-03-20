/*
** EPITECH PROJECT, 2018
** getnext line
** File description:
** test criterion
*/

#include  <criterion/criterion.h>
#include  <criterion/redirect.h>
#include  <fcntl.h>
#include  <unistd.h>

char *get_next_line(int fd);
int fd =  -1;

void  open_file(void) {
    fd = open("data.txt", O_RDONLY);
    cr_redirect_stdout ();
}

void  close_file(void) {
    if (fd !=  -1)
    close(fd);
}

Test(get_next_line , read_line , .init = open_file , .fini = close_file) {
    char *expected = "Confidence  is so  overrated.";
    char *got = get_next_line(fd);
    cr_assert_str_eq(got , expected);
}
Test(get_next_line2, read_line , .init = open_file , .fini = close_file) {
    char *expected = "It’s when we’re most uncomfortable and in desperate need of an answer that grow";
    get_next_line(fd);
    char *got = get_next_line(fd);
    cr_assert_str_eq(got , expected);
}
