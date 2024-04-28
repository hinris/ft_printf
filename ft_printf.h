#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

# define BUF_SIZE (1<<12)

typedef struct s_format
{
    bool    left_justified;
    bool    plus;
    bool    space;
    bool    hash;
    bool    zero_pad;
    int     width_value;
    int     precision_value;

    char    specifier;
}               t_format;

typedef struct s_data
{
    const char *s;

    va_list     ap;
    int         chars_written;
    char        *buffer;
    int         buffer_index;

    t_format    format;
}               t_data;

#endif