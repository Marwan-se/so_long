/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:56:49 by msekhsou          #+#    #+#             */
/*   Updated: 2023/01/30 07:42:45 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	p_location(t_infos *my)
{
	my->i = 0;
	my->j = 0;
	while (my->map[my->i])
	{
		while (my->map[my->i][my->j])
		{
			if (my->map[my->i][my->j] == 'P')
				return (0);
			my->j++;
		}
		my->j = 0;
		my->i++;
	}
	return (0);
}

int	moveleft(t_infos *my)
{
	p_location(my);
	if (my->map[my->i][my->j - 1] == '1')
		return (0);
	if (my->map[my->i][my->j - 1] == '0')
	{
		my->map[my->i][my->j] = '0';
		my->map[my->i][my->j - 1] = 'P';
		my->mv_count++;
	}
	if (my->map[my->i][my->j - 1] == 'C')
	{
		my->map[my->i][my->j] = '0';
		my->map[my->i][my->j - 1] = 'P';
		my->colleatn++;
		my->mv_count++;
	}
	if (my->map[my->i][my->j - 1] == 'E' && my->collcntr == my->colleatn)
	{
		ft_printf("%s", "congrats, You win !\n");
		exit (0);
	}
	return (0);
}

int	moveright(t_infos *my)
{
	p_location(my);
	if (my->map[my->i][my->j + 1] == '1')
		return (0);
	if (my->map[my->i][my->j + 1] == '0')
	{
		my->map[my->i][my->j] = '0';
		my->map[my->i][my->j + 1] = 'P';
		my->mv_count++;
	}
	if (my->map[my->i][my->j + 1] == 'C')
	{
		my->map[my->i][my->j] = '0';
		my->map[my->i][my->j + 1] = 'P';
		my->colleatn++;
		my->mv_count++;
	}
	if (my->map[my->i][my->j + 1] == 'E' && my->collcntr == my->colleatn)
	{
		ft_printf("%s", "congrats, You win !\n");
		exit (0);
	}
	return (0);
}

int	movedown(t_infos *my)
{
	p_location(my);
	if (my->map[my->i + 1][my->j] == '1')
		return (0);
	if (my->map[my->i + 1][my->j] == '0')
	{
		my->map[my->i][my->j] = '0';
		my->map[my->i + 1][my->j] = 'P';
		my->mv_count++;
	}
	if (my->map[my->i + 1][my->j] == 'C')
	{
		my->map[my->i][my->j] = '0';
		my->map[my->i + 1][my->j] = 'P';
		my->colleatn++;
		my->mv_count++;
	}
	if (my->map[my->i + 1][my->j] == 'E' && my->collcntr == my->colleatn)
	{
		ft_printf("%s", "congrats, You win !\n");
		exit (0);
	}
	return (0);
}

int	moveup(t_infos *my)
{
	p_location(my);
	if (my->map[my->i - 1][my->j] == '1')
		return (0);
	if (my->map[my->i - 1][my->j] == '0')
	{
		my->map[my->i][my->j] = '0';
		my->map[my->i - 1][my->j] = 'P';
		my->mv_count++;
	}
	if (my->map[my->i - 1][my->j] == 'C')
	{
		my->map[my->i][my->j] = '0';
		my->map[my->i - 1][my->j] = 'P';
		my->colleatn++;
		my->mv_count++;
	}
	if (my->map[my->i - 1][my->j] == 'E' && my->collcntr == my->colleatn)
	{
		ft_printf("%s", "congrats, You win !\n");
		exit (0);
	}
	return (0);
}
