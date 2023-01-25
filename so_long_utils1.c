/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:12:19 by msekhsou          #+#    #+#             */
/*   Updated: 2023/01/20 21:48:39 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	while (j < dstsize - 1 && src[j])
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

char	*ft_strstr(char *s, char *tofind)
{
	int	i;
	int	j;

	i = 0;
	if (tofind[0] == '\0')
		return ((char *)(s));
	while (s[i])
	{
		j = 0;
		while (s[i + j] == tofind[j])
		{
			if (tofind[j + 1] == '\0')
				return ((char *)(s + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
