/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 20:44:53 by seli              #+#    #+#             */
/*   Updated: 2018/10/07 20:51:21 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_main.h"

int		main(int ac, char **av)
{
	char	buf[BUF_SIZE + 1];
	int		result;

	while ((result = read(STDIN_FILENO, buf, BUF_SIZE)))
	{
		buf[result] = 0;
		ft_putstr(buf);
	}
	buf[result] = 0;
	ft_putstr(buf);
	return (0);
}
