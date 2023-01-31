/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:54:19 by msekhsou          #+#    #+#             */
/*   Updated: 2023/01/31 11:24:41 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_map2(char *line)
{
	t_infos	g;

	g.i = 0;
	g.e = 0;
	g.c = 0;
	g.p = 0;
	while (line[g.i])
	{
		if (line[g.i] != 'P' && line[g.i] != 'C' && line[g.i] != 'E'
			&& line[g.i] != '1' && line[g.i] != '0' && line[g.i] != '\n')
			return (0);
		if (line[g.i] == 'C')
			g.c++;
		if (line[g.i] == 'E')
			g.e++;
		if (line[g.i] == 'P')
			g.p++;
		g.i++;
	}
	if (g.p != 1 || g.c == 0 || g.e != 1)
		return (0);
	return (1);
}

int	esc(t_infos *my)
{
	printf("You Quit!\n");
	free_map(my->map);
	exit(0);
}

void	function(t_infos *my)
{
	if (my->img_0 == NULL || my->img_1 == NULL || \
		my->img_c == NULL || my->img_e == NULL || my->img_p == NULL)
	{
		ft_printf("check_imgs!!\n");
		exit(1);
	}
}
