/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:56:49 by msekhsou          #+#    #+#             */
/*   Updated: 2023/01/20 00:42:07 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int		p_location(t_infos *my)
{
	my->x = 0;
	my->y = 0;
	while (my->map[my->x])
	{
		while(my->map[my->x][my->y])
		{
			if (my->map[my->x][my->y] == 'P')
			return (0);
			my->y++;
		}
		my->y = 0;
		my->x++;
	}
	return (0);
}

int		move_left(t_infos *my)
{
	
}
