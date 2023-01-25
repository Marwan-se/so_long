/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:33:52 by msekhsou          #+#    #+#             */
/*   Updated: 2023/01/24 17:45:30 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	maplines(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

char	*read_map(int fd)
{
	char	*buf;
	int		ret;
	char	*line;

	buf = (char *)malloc(sizeof(char) * (2));
	line = calloc(0, 0);
	if (!buf)
		return (NULL);
	ret = 1;
	while (ret > 0)
	{
		ret = read(fd, buf, 1);
		if (ret == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[ret] = '\0';
		line = ft_strjoin(line, buf);
	}
	return (free(buf), line);
}

int	lines(char *line)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (line[i])
	{
		if (line[i] == '\n')
			count++;
		i++;
	}
	return (count + 1);
}

int	check_file(char *av)
{
	int	fd;

	fd = open (av, O_RDONLY);
	if (fd == -1)
	{
		write(2, "error", 5);
		exit (0);
	}
	if (ft_strstr(av, ".ber"))
		return (fd);
	else
	{
		write(2, "error", 5);
		exit (0);
	}
	return (fd);
}

int	check_map(char **map, char *line)
{
	int	j;
	int	i;

	i = 0;
	if (maplines(map) != lines(line))
		return (0);
	
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[0][j] != '1' || map[i][0] != '1')
				return (0);
			if (map[i][ft_strlen(map[i]) - 1] != '1'
				|| map[maplines(map) - 1][j] != '1')
				return (0);
			if (ft_strlen(map[i]) - 1
				!= ft_strlen(map[maplines(map) - 1]) - 1)
				return (0);
			j++;
		}
		i++;
	}
	if (i > 256 || (ft_strlen(map[0]) >= 244))
		return(0);
	return (1);
}
