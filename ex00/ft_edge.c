/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_edge.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 23:26:21 by seli              #+#    #+#             */
/*   Updated: 2018/10/07 23:37:22 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_edge.h"

void	ft_edge_case(t_metadata *data)
{
	if (data->top_left == 'o')
		write(1, "[rush-00] [1] [1]\n", 19);
	else if (data->top_left == '/')
		write(1, "[rush-01] [1] [1]\n", 19);
	else if (data->top_left == 'A')
		write(1, EDGE, 63);
	else
		data->no_match = TRUE;
}

void	ft_edge_width(t_metadata *data)
{
	if (data->top_left == 'o' && data->bottom_left == 'o'
		&& (data->v == 0 || data->v == '|'))
	{
		write(1, "[rush-00] [1] [", 16);
		ft_putnbr(data->height);
		write(1, "]\n", 2);
	}
	else if (data->top_left == '/' && data->bottom_left == '\\'
		&& (data->v == 0 || data->v == '*'))
	{
		write(1, "[rush-01] [1] [", 16);
		ft_putnbr(data->height);
		write(1, "]\n", 2);
	}
}
