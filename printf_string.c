/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 18:55:05 by anrodrig          #+#    #+#             */
/*   Updated: 2024/05/01 18:56:02 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     printf_string(char *s)
{
    int i;
    
    i = 0;
    if (!s)
        return (write(1, "(null)", 6));
    while (s[i] != '\0')
        printf_char(s[i++]);
    return (i);
}