#include "./megalibft.h"
#include <stdio.h>
int main()
{
    int fd = open("./Makefile", O_RDONLY);
    char *str = get_next_line(fd, 1);
    printf("%s", str);
    free(str);
}