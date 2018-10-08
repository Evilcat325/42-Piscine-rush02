/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 20:52:44 by seli              #+#    #+#             */
/*   Updated: 2018/10/07 23:37:41 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(long nb);
int		ft_strlen(char *str);
int		ft_get_width(char *str);
int		ft_get_height(char *str);

#endif
