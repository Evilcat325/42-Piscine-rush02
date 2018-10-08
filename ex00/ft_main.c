/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 20:44:53 by seli              #+#    #+#             */
/*   Updated: 2018/10/07 23:38:28 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_main.h"
#include <stdio.h>

int		main(void)
{
	char			buf[BUF_SIZE + 1];
	int				result;
	t_metadata		data;

	result = read(STDIN_FILENO, buf, BUF_SIZE);
	buf[result] = 0;
	ft_initialize_data(buf, &data);
	ft_get_data(buf, &data);
	ft_check_data(&data);
	return (0);
}

void	ft_get_data(char buf[BUF_SIZE + 1], t_metadata *data)
{
	int i;
	int row;

	i = 0;
	row = 0;
	while (buf[i])
	{
		if (ft_get_width(&buf[i]) != data->width)
			data->no_match = TRUE;
		else if (row == 0 || row == data->height - 1)
		{
			ft_check_top_bottom(buf, data, i);
			if (row == data->height - 1)
			{
				data->bottom_left = buf[i + 0];
				data->bottom_right = buf[i + data->width - 1];
			}
		}
		else
			ft_check_middle(buf, data, i);
		if (data->no_match)
			return ;
		i += data->width + 1;
		row++;
	}
}

void	ft_check_data(t_metadata *data)
{
	if (data->width == 1 && data->height == 1)
		ft_edge_case(data);
	else if (data->width == 1)
		ft_edge_width(data);
	if (data->no_match)
		ft_no_match();
}
