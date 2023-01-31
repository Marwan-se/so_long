/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:31:14 by msekhsou          #+#    #+#             */
/*   Updated: 2023/01/31 10:48:51 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	v_map(int fd, int i)
{
	if (fd == 1 && i == 1)
		return (1);
	return (0);
}

void	free_map(char **map)
{
	int	i;

	i = -1;
	while (map[++i])
		free(map[i]);
	free(map);
}

int	main(int argc, char **argv)
{
	t_infos	my;
	char	**map;

	if (argc != 2)
		return (ft_printf("error in arguments\n"), 0);
	else
	{
		my.fd = check_file(argv[1]);
		my.line = read_map(my.fd);
		map = ft_split(my.line, '\n');
		my.map = ft_split(my.line, '\n');
		my.fd = check_map(my.map, my.line);
		my.n = check_map2(my.line);
		if (v_map(my.fd, my.n) == 0 || v_path(map) == 0)
			return (ft_printf("error in map\n"), 0);
		print_map(&my);
	}
}
