/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utile1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myyou <myyou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:03:50 by myyou             #+#    #+#             */
/*   Updated: 2022/07/08 13:06:18 by myyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(int c)
{
    write(1, &c, 1);
    return (1);
}

int ft_putstr(char *s)
{
    if (!s)
    {
        write(1, "(null)", ft_strlen("(null)"));
        return (ft_strlen("(null)"));
    }
    write(1, s, strlen(s));
    return (ft_strlen(s));
}

size_t  ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

int ft_puthexmin(unsigned long long nb)
{
    static int  i;

    i = 0;
    if (nb >= 16)
            ft_puthexmin(nb / 16);
    ft_putchar("0123456789abcdef"[nb % 16]);
    i++;
    return (i);
}

