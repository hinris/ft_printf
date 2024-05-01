/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 18:56:48 by anrodrig          #+#    #+#             */
/*   Updated: 2024/05/01 21:10:29 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     printf_arg(va_list ap, const char format)
{
	int count;

	count = 0;
	if (format == 'c')
		count += printf_char(va_arg(ap, int));
	else if (format == 's')
		count += printf_string(va_arg(ap, char *));
	else if (format == 'p')
	   count += printf_ptr(va_arg(ap, unsigned long));
	else if (format == 'd' || format == 'i')
		count += printf_int((long)va_arg(ap, int));
	else if (format == 'u')
		count += printf_unsigned(va_arg(ap, unsigned int));
	else if (format == 'x')
		count += printf_hex(va_arg(ap, unsigned int), 16, "0123456789abcdef");
	else if (format == 'X')
		count += printf_hex(va_arg(ap, unsigned int), 16, "0123456789ABCDEF");
	else if (format == '%')
		count += printf_char('%');
	return (count);
}
