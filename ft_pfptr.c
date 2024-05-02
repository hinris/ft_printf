/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:10:52 by anrodrig          #+#    #+#             */
/*   Updated: 2024/05/02 20:06:48 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putptr(unsigned long n, const char *base)
{
	int	counter;

	counter = 0;
	if (n > 15)
		counter += ft_putptr(n / 16, base);
	counter += ft_pfchar(*(base + (n % 16)));
	return (counter);
}

int	ft_pfptr(void *format)
{
	unsigned long	n;
	const char		*base;
	int				counter;

	n = (unsigned long)format;
	if (n == 0)
		return (write(1, "(nil)", 5));
	base = "0123456789abcdef";
	counter = ft_pfstring("0x");
	counter += ft_putptr(n, base);
	return (counter);
}

/* int main()
{
	void *pt;
	int j = 0;

	pt = NULL;
	j = printf(NULL);
	ft_printf("%d", j);
	return 0;
} */
