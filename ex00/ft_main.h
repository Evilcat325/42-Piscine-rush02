/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 20:45:14 by seli              #+#    #+#             */
/*   Updated: 2018/10/07 23:28:16 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAIN_H
# define FT_MAIN_H
# include <unistd.h>
# include "ft_define.h"
# include "ft_stdio.h"
# include "ft_check_data.h"
# include "ft_edge.h"

void	ft_get_data(char buf[BUF_SIZE + 1], t_metadata *data);
void	ft_check_data(t_metadata *data);
int		main(void);

#endif
