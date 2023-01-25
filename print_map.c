/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:14:28 by msekhsou          #+#    #+#             */
/*   Updated: 2023/01/23 04:35:38 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_img(t_infos *my)
{
	mlx_clear_window(my->mlx_ptr, my->mlxp_win);
	print_wall1(my);
	print_collectc(my);
	print_playerp(my);
	print_exite(my);
	print_floor0(my);
}

int	key(int k, t_infos *my)
{
	int	i;

	i = my->mv_count;
	if (k == 0)
	{
		moveleft(my);
		print_img(my);
		if (my->mv_count != i)
			ft_printf("%d\n", my->mv_count);
	}
	if (k == 2)
	{
		moveright(my);
		print_img(my);
		if (my->mv_count != i)
			ft_printf("%d\n", my->mv_count);
	}
	if (k == 53 || k == 1 || k == 13)
		key2(k, my, i);
	return (0);
}

void	free_all(t_infos *my)
{
	free(my->line);
	free(my->map);
	mlx_destroy_image(my->mlx_ptr, my->img_1);
	mlx_destroy_image(my->mlx_ptr, my->img_0);
	mlx_destroy_image(my->mlx_ptr, my->img_p);
	mlx_destroy_image(my->mlx_ptr, my->img_e);
	mlx_destroy_image(my->mlx_ptr, my->img_c);
}

void	key2(int k, t_infos *my, int i)
{
	if (k == 53)
	{
		ft_printf("You Quit!\n");
		free_all(my);
		exit (0);
	}
	if (k == 1)
	{
		movedown(my);
		print_img(my);
		if (my->mv_count != i)
			ft_printf("%d\n", my->mv_count);
	}
	if (k == 13)
	{
		moveup(my);
		print_img(my);
		if (my->mv_count != i)
			ft_printf("%d\n", my->mv_count);
	}
}

void	print_map(t_infos *my)
{
	my->i = 0;
	my->j = 0;
	my->mv_count = 0;
	my->colleatn = 0;
	my->mlx_ptr = mlx_init();
	my->mlxp_win = mlx_new_window(my->mlx_ptr, \
	ft_strlen(my->map[my->i]) * 64, maplines(my->map) * 64, "so_long");
	my->img_1 = mlx_xpm_file_to_image(my->mlx_ptr, "./image/wall.xpm", \
	&my->i, &my->j);
	my->img_c = mlx_xpm_file_to_image(my->mlx_ptr, "./image/collectible.xpm", \
	&my->i, &my->j);
	my->img_p = mlx_xpm_file_to_image(my->mlx_ptr, "./image/player.xpm", \
	&my->i, &my->j);
	my->img_e = mlx_xpm_file_to_image(my->mlx_ptr, "./image/door.xpm", \
	&my->i, &my->j);
	my->img_0 = mlx_xpm_file_to_image(my->mlx_ptr, "./image/floor.xpm", \
	&my->i, &my->j);
	print_img(my);
	mlx_hook(my->mlxp_win, 2, 0, key, my);
	mlx_hook(my->mlxp_win, 17, 0, sa, NULL);
	collectibles(my);
	mlx_loop(my->mlx_ptr);
}
