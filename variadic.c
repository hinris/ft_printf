#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

float average(int n, ...)
{
    va_list ap;
    int total;
    int i;

    va_start(ap, n);
    total = 0;
    i = 0;
    while (i < n)
    {
        total += va_arg(ap, int);
        ++i;
    }
    return ((float)total / n);
}

void    putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int main(int argc, char const *argv[])
{
    int i = 0;

    while (argc == 2 && argv[1][i] != '\0')
    {
        write(1, &argv[1][i++], 1);
    }
    return 0;
}
