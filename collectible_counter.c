/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collectible_counter.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:49:42 by msekhsou          #+#    #+#             */
/*   Updated: 2023/01/23 04:31:03 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	collectibles(t_infos *my)
{
	my->i = 0;
	my->j = 0;
	while (my->map[my->i])
	{
		while (my->map[my->i][my->j])
		{
			if (my->map[my->i][my->j] == 'C')
			my->collcntr++;
			my->j++;
		}
		my->j = 0;
		my->i++;
	}
}
