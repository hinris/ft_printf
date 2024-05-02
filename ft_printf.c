/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:06:00 by anrodrig          #+#    #+#             */
/*   Updated: 2024/05/02 15:12:35 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pfarg(va_list ap, const char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_pfchar(va_arg(ap, int));
	else if (format == 's')
		count += ft_pfstring(va_arg(ap, char *));
	else if (format == 'p')
	   count += ft_pfptr(va_arg(ap, unsigned long));
	else if (format == 'd' || format == 'i')
		count += ft_pfint((long)va_arg(ap, int));
	else if (format == 'u')
		count += ft_pfunsigned(va_arg(ap, unsigned int));
	else if (format == 'x')
		count += ft_pfhex(va_arg(ap, unsigned int), 16, "0123456789abcdef");
	else if (format == 'X')
		count += ft_pfhex(va_arg(ap, unsigned int), 16, "0123456789ABCDEF");
	else if (format == '%')
		count += ft_pfchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	unsigned int	count;

	count = 0;
	va_start(ap, format);

	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
			count += ft_pfarg(ap, *++format);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}


