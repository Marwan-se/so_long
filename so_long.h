/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:00:50 by msekhsou          #+#    #+#             */
/*   Updated: 2023/01/24 18:27:37 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <mlx.h>
# include <unistd.h>
# include <fcntl.h>
# include "ft_printf/ft_printf.h"

typedef struct s_infos
{
	char	*line;
	int		h;
	int		w;
	int		i;
	int		x;
	int		y;
	int		e;
	int		c;
	int		p;
	int		n;
	int		fd;
	int		j;
	int		f;
	int		colleatn;
	int		collcntr;
	int		mv_count;
	void	*mlx_ptr;
	void	*mlxp_win;
	void	*img_1;
	void	*img_p;
	void	*img_c;
	void	*img_0;
	void	*img_e;
	char	**map;
}t_infos;

size_t	ft_strlen(char *c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
char	*ft_strdup(char *str);
char	**ft_split(char *s, char c);
size_t	ft_strlcat(char *dst, char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
char	*ft_strstr(char *s, char *tofind);
int		p_location(t_infos	*my);
int		check_map(char **map, char *line);
int		maplines(char **map);
int		lines(char *line);
int		check_file(char *av);
void	print_map(t_infos *my);
void	print_wall1(t_infos*my);
void	print_floor0(t_infos*my);
void	print_playerp(t_infos*my);
void	print_collectc(t_infos*my);
void	print_exite(t_infos*my);
void	print_img(t_infos *my);
char	*read_map(int fd);
int		check_map2(char *line);
int		p_location(t_infos *my);
int		moveleft(t_infos *my);
int		moveright(t_infos *my);
int		movedown(t_infos *my);
int		moveup(t_infos *my);
void	collectibles(t_infos *my);
int		key(int k, t_infos *my);
void	key2(int k, t_infos *my, int i);
int		sa(void);
void	free_all(t_infos *my);
#endif