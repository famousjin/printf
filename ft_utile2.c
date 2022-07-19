/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utile2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myyou <myyou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:06:28 by myyou             #+#    #+#             */
/*   Updated: 2022/07/08 13:07:39 by myyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthexmax(unsigned long long nb)
{
    static int  i;

    i = 0;
    if (nb >= 16)
        ft_puthexmax(nb / 16);
    ft_putchar("0123456789ABCDEF"[nb % 16]);
    i++;
    return (i);
}

int ft_putten(unsigned int nb)
{
    static int  i;

    i = 0;
    if (nb >= 10)
    {
        ft_putten(nb / 10);
        nb %= 10;
    }
    ft_putchar(nb + '0');
    i++;
    return (i);
}

int ft_putnbr(int nb)
{
    char    *str;
    int     len;

    str = ft_itoa(nb);
    if (!str)
        return (0);
    len = ft_strlen(str);
    write(1, str, len);
    free(str);
    return (len);
}
