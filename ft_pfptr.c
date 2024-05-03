/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:10:52 by anrodrig          #+#    #+#             */
/*   Updated: 2024/05/03 18:17:57 by anrodrig         ###   ########.fr       */
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
	char	c = 'a';
	char	*s = "bruh";
	char 	*sn = NULL;
	int		i = 0;
	void	*pn = NULL;
	void	*pt = &c;
	int		min = -2147483648;
	int		max = 2147483647;

	printf("\noriginal printf:\n");
	i = printf("char: %c\n", c);
	printf("size: %d\n", i);
	i = printf("string: %s\n", s);
	printf("size: %d\n", i);
	i = printf("string null: %s\n", sn);
	printf("size: %d\n", i);
	i = printf("int: %d, %i, %i\n", '0', min, max);
	printf("size: %d\n", i);
	i = printf("null pointer: %p\n", pn);
	printf("size: %d\n", i);
	i = printf("pointer: %p\n", pt);
	printf("size: %d\n", i);
	i = printf(0);
	printf("\nsize: %d\n\n", i);

	ft_printf("ft_printf:\n");
	i = ft_printf("char: %c\n", c);
	ft_printf("size: %d\n", i);
	i = ft_printf("string: %s\n", s);
	ft_printf("size: %d\n", i);
	i = ft_printf("string null: %s\n", sn);
	ft_printf("size: %d\n", i);
	i = ft_printf("int: %d, %i, %i\n", '0', min, max);
	ft_printf("size: %d\n", i);
	i = ft_printf("null pointer: %p\n", pn);
	ft_printf("size: %d\n", i);
	i = ft_printf("pointer: %p\n", pt);
	ft_printf("size: %d\n", i);
	i = ft_printf(0);
	ft_printf("\nsize: %d\n", i);
	return (0);
} */
