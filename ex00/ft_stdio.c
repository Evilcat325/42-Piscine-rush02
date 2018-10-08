/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 20:52:19 by seli              #+#    #+#             */
/*   Updated: 2018/10/07 23:36:03 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long nb)
{
	long	divisor;
	long	c;

	if (nb < 0)
		ft_putchar('-');
	divisor = 1000000000000000000;
	while (nb / divisor == 0 && divisor != 1)
	{
		divisor /= 10;
	}
	while (divisor != 1)
	{
		c = (nb / divisor) % 10;
		if (c < 0)
			c = -c;
		ft_putchar(c + '0');
		divisor /= 10;
	}
	c = nb % 10;
	if (c < 0)
		c = -c;
	ft_putchar(c + '0');
}

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

int		ft_get_width(char *str)
{
	int	w;

	w = 0;
	while (*str && *str != '\n')
	{
		str++;
		w++;
	}
	return (w);
}

int		ft_get_height(char *str)
{
	int	h;

	h = 0;
	while (*str)
	{
		str++;
		h += *str == '\n';
	}
	return (h);
}
