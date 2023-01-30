/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 08:55:18 by msekhsou          #+#    #+#             */
/*   Updated: 2023/01/30 10:38:38 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static	int	looking_fr_0(char **f_map, int i, int j)
{
	while (f_map[i] != '\0')
	{
		j = 0;
		while (f_map[i][j] != '\0')
		{
			if (f_map[i][j] == '0' && (f_map[i][j - 1] == 'P'
						|| f_map[i][j + 1] == 'P' || f_map[i - 1][j] == 'P'
						|| f_map[i + 1][j] == 'P'))
				return (1);
			else if (f_map[i][j] == 'C' && (f_map[i][j - 1] == 'P'
						|| f_map[i][j + 1] == 'P' || f_map[i -1][j] == 'P'
						|| f_map[i +1][j] == 'P'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static	void	replace_b1(char **f_map, int i, int j)
{
	while (f_map[i] != '\0')
	{
		j = 0;
		while (f_map[i][j] != '\0')
		{
			if (f_map[i][j] == '0' && (f_map[i][j - 1] == 'P'
						|| f_map[i][j + 1] == 'P' || f_map[i - 1][j] == 'P'
						|| f_map[i + 1][j] == 'P'))
				f_map[i][j] = 'P';
			else if (f_map[i][j] == 'C' && (f_map[i][j - 1] == 'P'
						|| f_map[i][j + 1] == 'P' || f_map[i - 1][j] == 'P'
						|| f_map[i + 1][j] == 'P'))
				f_map[i][j] = 'P';
			j++;
		}
		i++;
	}
}

static int	check_for_exit(char **fmap)
{
	int	i;
	int	j;

	i = 0;
	while (fmap[i] != '\0')
	{
		j = 0;
		while (fmap[i][j] != '\0')
		{
			if (fmap[i][j] == 'E' && (fmap[i][j -1] == 'P'
						|| fmap[i][j +1] == 'P' || fmap[i -1][j] == 'P'
						|| fmap[i +1][j] == 'P'))
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	check_last(char **fmap)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (fmap[i] != '\0')
	{
		j = 0;
		while (fmap[i][j] != '\0')
		{
			if (fmap[i][j] == 'C')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	v_path(char	**i_map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (looking_fr_0(i_map, i, j) == 1)
		replace_b1(i_map, i, j);
	if (check_for_exit(i_map) == 1 && check_last(i_map) == 1)
		return (1);
	return (0);
}
