/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myyou <myyou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:57:33 by myyou             #+#    #+#             */
/*   Updated: 2022/07/08 13:00:19 by myyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

size_t	ft_strlen(const char *s);
int	ft_printf(char const *str, ...);
int	ft_specifier(char const *str, va_list ap, int i);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_puthexmin(unsigned long long nb);
int	ft_putnbr(int nb);
int	ft_putten(unsigned int nb);
int	ft_puthexmax(unsigned long long nb);

#endif

