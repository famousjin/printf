/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myyou <myyou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:40:31 by myyou             #+#    #+#             */
/*   Updated: 2022/07/08 12:51:48 by myyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifier(char const *str, va_list ap, int i)
{
	int	print_size;

	print_size = 0;
	if (str[i] == 'c')
		print_size += ft_putchar(va_arg(ap, int));
	else if (str[i] == 's')
		print_size += ft_putstr(va_arg(ap, char *));
	else if (str[i] == 'p')
	{
		print_size += ft_putstr("0x");
		print_size += ft_puthexmin(va_arg(ap, unsigned long long));
	}
	else if ((str[i] == 'd') || (str[i] == 'i'))
		print_size += ft_putnbr(va_arg(ap, int));
	else if ((str[i] == 'u'))
		print_size += ft_putten(va_arg(ap, unsigned int));
	else if ((str[i] == 'x'))
		print_size += ft_puthexmin(va_arg(ap, unsigned int));
	else if ((str[i] == 'X'))
		print_size += ft_puthexmax(va_arg(ap, unsigned int));
	else if ((str[i] == '%'))
		print_size += ft_putchar('%');
	return (print_size);
}

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		print_size;
	int		i;

	va_start(ap, str);
	print_size = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
				print_size += ft_specifier(str, ap, ++i);
		else
		{
			ft_putchar(str[i]);
			print_size++;
		}
		i++;
	}
	va_end(ap);
	return (print_size);
}
