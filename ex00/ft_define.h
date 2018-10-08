/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 20:47:45 by seli              #+#    #+#             */
/*   Updated: 2018/10/07 23:35:54 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEFINE_H
# define FT_DEFINE_H

# define BUF_SIZE 4096*1000
# define START 0
# define NOT_START -1
# define END_AT_EOL 1
# define END_AT_MIDDLE 2
# define TRUE 1
# define FALSE 0
# define EDGE "[colle-02] [1] [1] || [colle-03] [1] [1] || [colle-04] [1] [1]\n"


typedef struct		s_metadata
{
	char	top_left;
	char	top_right;
	char	bottom_left;
	char	bottom_right;
	char	horizontal;
	char	space;
	char	v;
	int		height;
	int		width;
	int		no_match;
}					t_metadata;

#endif
