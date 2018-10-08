/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_data.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 23:05:35 by seli              #+#    #+#             */
/*   Updated: 2018/10/07 23:24:30 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECK_DATA_H
# define FT_CHECK_DATA_H
# include <unistd.h>
# include "ft_define.h"
# include "ft_stdio.h"

void	ft_check_top_bottom(char buf[BUF_SIZE + 1], t_metadata *data, int i);
void	ft_check_middle(char buf[BUF_SIZE + 1], t_metadata *data, int i);
void	ft_initialize_data(char buf[BUF_SIZE + 1], t_metadata *data);
void	ft_no_match(void);

#endif
