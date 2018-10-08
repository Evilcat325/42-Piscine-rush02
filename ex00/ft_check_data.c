/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 23:05:18 by seli              #+#    #+#             */
/*   Updated: 2018/10/07 23:24:46 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_data.h"

void	ft_check_top_bottom(char buf[BUF_SIZE + 1], t_metadata *data, int i)
{
	int col;

	col = 0;
	while (++col < data->width - 1)
		if (buf[i + col] != data->horizontal)
			data->no_match = TRUE;
}

void	ft_check_middle(char buf[BUF_SIZE + 1], t_metadata *data, int i)
{
	int col;

	col = 0;
	if (buf[i + 0] != data->v || buf[i + data->width - 1] != data->v)
		data->no_match = TRUE;
	while (++col < data->width - 1)
		if (buf[i + col] != data->space)
			data->no_match = TRUE;
}

void	ft_initialize_data(char buf[BUF_SIZE + 1], t_metadata *data)
{
	data->width = ft_get_width(buf);
	data->height = ft_get_height(buf);
	data->top_left = buf[0];
	data->top_right = data->width > 1 ? buf[data->width - 1] : 0;
	data->bottom_left = 0;
	data->bottom_right = 0;
	data->horizontal = data->width > 2 ? buf[1] : 0;
	data->v = data->height > 2 ? buf[data->width + 1] : 0;
	data->space = data->horizontal && data->v ? buf[data->width + 2] : 0;
	data->no_match = FALSE;
}

void	ft_no_match(void)
{
	write(2, "aucune\n", 7);
}
