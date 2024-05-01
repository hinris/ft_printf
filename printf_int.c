/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 18:54:42 by anrodrig          #+#    #+#             */
/*   Updated: 2024/05/01 18:54:56 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     printf_int(long nb)
{
    int     count;
    char    c[10];
    int     i;
    
    count = 0;
    i = 0;
    if (nb == 0)
        count += printf_char('0');
    if (nb < 0)
    {
        nb = -nb;
        count += printf_char('-');
    }
    while(nb)
    {
        c[i++] = (nb % 10) + 48;
        nb /= 10;
    }
    while (i--)
        count += printf_char(c[i]);
    return (count);
}