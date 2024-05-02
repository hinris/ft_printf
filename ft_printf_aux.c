/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 18:52:27 by anrodrig          #+#    #+#             */
/*   Updated: 2024/05/02 20:08:07 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pfchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_pfstring(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i] != '\0')
		ft_pfchar(s[i++]);
	return (i);
}

int	ft_pfint(long nb)
{
	char	c[10];
	int		count;
	int		i;

	count = 0;
	i = 0;
	if (nb == 0)
		count += ft_pfchar('0');
	if (nb < 0)
	{
		nb = -nb;
		count += ft_pfchar('-');
	}
	while (nb)
	{
		c[i++] = (nb % 10) + 48;
		nb /= 10;
	}
	while (i--)
		count += ft_pfchar(c[i]);
	return (count);
}

int	ft_pfunsigned(unsigned int n)
{
	char	c[10];
	int		count;
	int		i;

	count = 0;
	i = 0;
	if (n == 0)
		count += ft_pfchar('0');
	while (n)
	{
		c[i++] = (n % 10) + 48;
		n /= 10;
	}
	while (i--)
		count += ft_pfchar(c[i]);
	return (count);
}

int	ft_pfhex(long n, int base, char *str)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_pfhex(-n, base, str) + 1);
	}
	else if (n < base)
		return (ft_pfchar(str[n]));
	else
	{
		count = ft_pfhex(n / base, base, str);
		return (count + ft_pfhex(n % base, base, str));
	}
}
