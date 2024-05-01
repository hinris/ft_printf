/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:54:22 by anrodrig          #+#    #+#             */
/*   Updated: 2024/05/01 21:03:56 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int printf_hex(long n, int base, char *str)
{
    int count;
    
    count = 0;
    if (n < 0)
    {
        write(1, "-", 1);
        return (printf_hex(-n, base, str) + 1);
    }
    else if (n < base)
        return (printf_char(str[n]));
    else
    {
        count = printf_hex(n / base, base, str);
        return (count + printf_hex(n % base, base, str));
    }
}