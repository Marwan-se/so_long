/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:00:50 by msekhsou          #+#    #+#             */
/*   Updated: 2023/01/10 15:06:36 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <mlx.h>
# include "ft_printf/ft_printf.h"

typedef	struct s_mvmnts
{
	char	**map;
	int		x;
	int		y;
}t_mvmnts;


int		ft_strlen(char *c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(char *s, int c);
char	*ft_strdup(char *str);
char	**ft_split(char const *s, char c);

#endif