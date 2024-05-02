/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:10:52 by anrodrig          #+#    #+#             */
/*   Updated: 2024/05/02 15:34:42 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_len(unsigned long n)
{
	int	counter;

	counter = 0;
	while (n != 0)
	{
		counter++;
		n /= 16;
	}
	return (counter);
}

void     ft_put_ptr(unsigned long n)
{
	if (n >= 16)
	{
		ft_put_ptr(n / 16);
		ft_put_ptr(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_pfchar(n + '0');
		else
			ft_pfchar(n - 10 + 'a');
	}
}

int     ft_pfptr(unsigned long	n)
{
	int	counter;

	counter = 0;
	counter += ft_pfstring("0x");
	if (n == 0)
        counter += write(1, "0", 1);
	else
	{
		ft_put_ptr(n);
		counter += ft_ptr_len(n);
	}	
	return (counter);
}
/* int main()
{
	ft_printf("%p\n", 0);
	return 0;
} */
