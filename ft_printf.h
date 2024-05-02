/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:06:04 by anrodrig          #+#    #+#             */
/*   Updated: 2024/05/02 20:04:08 by anrodrig         ###   ########.fr       */
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
int		ft_pfhex(long n, int base, char *str);
int		ft_pfptr(void *format);

#endif
