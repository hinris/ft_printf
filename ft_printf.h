/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:06:04 by anrodrig          #+#    #+#             */
/*   Updated: 2024/05/02 11:48:45 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_pfchar(int c);
int		ft_pfstring(char *s);
int		ft_pfint(long nb);
int		ft_pfunsigned(unsigned int n);
int		ft_pfarg(va_list ap, const char format);
int		ft_pfhex(long, int base, char *str);
int		ft_pfptr(unsigned long n);
int		ft_ptr_len(unsigned long n);
void		ft_put_ptr(unsigned long n);

#endif
