/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelen <ekelen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 17:55:52 by ekelen            #+#    #+#             */
/*   Updated: 2017/02/22 14:43:57 by ekelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strmapnew(size_t rows, size_t columns)
{
	char **map;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	map = (char **)ft_memalloc((sizeof(char *) * rows + 1));
	if (!map)
		return (NULL);
	while (i < rows)
	{
		*(map + i) = (char *)ft_memalloc(columns + 1);
		ft_memset(map[i], (int)'\0', columns + 1);
		i++;
	}
	*(map + i) = 0;
	return (map);
}
