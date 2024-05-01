/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:06:04 by anrodrig          #+#    #+#             */
/*   Updated: 2024/05/01 18:57:24 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

int     ft_printf(const char *format, ...);
int     printf_char(int c);
int     printf_string(char *s);
int     printf_int(long nb);
int     printf_unsigned(unsigned int n);
int     printf_arg(va_list ap, const char format);

#endif