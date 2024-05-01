/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 18:48:16 by anrodrig          #+#    #+#             */
/*   Updated: 2024/05/01 18:52:47 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int       printf_unsigned(unsigned int n)
{
    int    count;
    char            c[10];
    int             i;

    count = 0;
    i = 0;
    if (n == 0)
        count += printf_char('0');
    while(n)
    {
        c[i++] = (n % 10) + 48;
        n /= 10;
    }
    while (i--)
        count += printf_char(c[i]);
    return (count);
}