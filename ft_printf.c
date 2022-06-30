/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myyou <myyou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:54:11 by myyou             #+#    #+#             */
/*   Updated: 2022/06/30 16:31:35 by myyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include <unistd.h>
#include <stdarg.h>

void	ft_specifier(char c, va_list ap)
{
	if (c == 'c')
		ft_putchar(ap)
	else if (c == 's')
		ft_putstr(ap)
	else if (c == 'd' || c == 'i')
		ft_putnbr(ap)
	else if (c == 'u')
	else if (c == 'x')
	else if (c == 'X')
	else if (c == 'p')
	else if (c == '%')
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int	i;

	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] != '\0')
			ft_specifier(s[++i], ap);
		else
			write(1, '%', 1);
		i++;
	}
	va_end(ap) 
}

int	main()
{
	ft_printf("%s\n", "bonjour");
	return(-1);
}
