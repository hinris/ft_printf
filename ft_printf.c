/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:06:00 by anrodrig          #+#    #+#             */
/*   Updated: 2024/05/01 19:52:40 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list             ap;
    unsigned int     count;
    
    count = 0;
    va_start(ap, format);
    
    if (!format)
        return (-1);
    while (*format)
    {
        if (*format == '%')
            count += printf_arg(ap, *++format);
        else
            count += write(1, format, 1);
        ++format;
    }
    va_end(ap);
    return (count);
}

/* int main() {
    
    int a = 10;
    
    printf("%u\n", -1);
    ft_printf("%u", -1);
    return 0;
} */