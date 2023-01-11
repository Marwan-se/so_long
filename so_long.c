/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:31:14 by msekhsou          #+#    #+#             */
/*   Updated: 2023/01/11 13:21:38 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "so_long");
	//parsing map
	//draw map

	// while(my->p[y])
	// {
	// 	while(p[y][j])
	// 	{
	// 		if(p[y][j] == '1')
	// 			mlx_put_image_to_window(,y,j);
	// 		if()
	// 		else
	// 			gfh
	// 	}
	// 	y++;
	// }
	mlx_loop(mlx);
}