/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:59:28 by msekhsou          #+#    #+#             */
/*   Updated: 2023/01/08 00:14:27 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	if (!c)
		return (0);
	while (c[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pointer;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	pointer = (char *)malloc(sizeof(char) * len);
	if (!pointer)
		return (NULL);
	ft_strlcpy(pointer, s1, len);
	ft_strlcat(pointer, s2, len);
	return (pointer);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (*(char *)(s + i))
	{
		if (*(char *)(s + i) == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

char	*ft_strdup(char *str)
{
	unsigned int	k;
	unsigned int	i;
	char			*p;

	i = 0;
	k = ft_strlen((char *)str) + 1;
	p = (char *)malloc(k * sizeof(char));
	if (!p)
		return (NULL);
	if (!str)
	{
		str[i] = '\0';
		return (str);
	}
	while (str && k-- > 0)
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
