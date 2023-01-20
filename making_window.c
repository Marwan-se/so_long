/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   making_window.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:23:47 by msekhsou          #+#    #+#             */
/*   Updated: 2023/01/15 20:17:02 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// mlx_put_image_to_window(my->mlx_ptr, my->mlxp_win, my->img_, 0, 0);
// 	mlx_put_image_to_window(my->mlx_ptr, my->mlxp_win, my->img, 500, 1000);
// 	mlx_put_image_to_window(my->mlx_ptr, my->mlxp_win, my->img, 674, 999);
// 	mlx_put_image_to_window(my->mlx_ptr, my->mlxp_win, my->img, 50, 50);
// 	mlx_put_image_to_window(my->mlx_ptr, my->mlxp_win, my->img, 128, 128);
void	print_wall1(t_infos *my)
{
	my->y = 0;
	my->f = 0;
	while (my->map[my->f])
	{
		my->j = 0;
		my->x = 0;
		while (my->map[my->f][my->j])
		{
			if (my->map[my->f][my->j] == '1')
				mlx_put_image_to_window(my->mlx_ptr, my->mlxp_win,
					my->img_1, my->x, my->y);
			my->x += 64;
			my->j++;
		}
		my->y += 64;
		my->f++;
	}
}

void	print_floor0(t_infos *my)
{
	my->x = 0;
	my->y = 0;
	my->j = 0;
	my->f = 0;
	while (my->map[my->f])
	{
		while (my->map[my->f][my->j])
		{
			if (my->map[my->f][my->j] == '0')
				mlx_put_image_to_window(my->mlx_ptr, my->mlxp_win,
					my->img_0, my->x, my->y);
			my->x += 64;
			my->j++;
		}
		my->y += 64;
		my->x = 0;
		my->j = 0;
		my->f++;
	}
}

void	print_playerp(t_infos *my)
{
	my->x = 0;
	my->y = 0;
	my->j = 0;
	my->f = 0;
	while (my->map[my->f])
	{
		while (my->map[my->f][my->j])
		{
			if (my->map[my->f][my->j] == 'P')
				mlx_put_image_to_window(my->mlx_ptr, my->mlxp_win,
					my->img_p, my->x, my->y);
			my->x += 64;
			my->j++;
		}
		my->y += 64;
		my->x = 0;
		my->j = 0;
		my->f++;
	}
}

void	print_collectc(t_infos *my)
{
	my->x = 0;
	my->y = 0;
	my->j = 0;
	my->f = 0;
	while (my->map[my->f])
	{
		while (my->map[my->f][my->j])
		{
			if (my->map[my->f][my->j] == 'C')
				mlx_put_image_to_window(my->mlx_ptr, my->mlxp_win,
					my->img_c, my->x, my->y);
			my->x += 64;
			my->j++;
		}
		my->y += 64;
		my->x = 0;
		my->j = 0;
		my->f++;
	}
}

void	print_exite(t_infos *my)
{
	my->x = 0;
	my->y = 0;
	my->j = 0;
	my->f = 0;
	while (my->map[my->f])
	{
		while (my->map[my->f][my->j])
		{
			if (my->map[my->f][my->j] == 'E')
				mlx_put_image_to_window(my->mlx_ptr, my->mlxp_win,
					my->img_e, my->x, my->y);
			my->x += 64;
			my->j++;
		}
		my->y += 64;
		my->x = 0;
		my->j = 0;
		my->f++;
	}
}