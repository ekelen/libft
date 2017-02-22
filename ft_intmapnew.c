/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intmapnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 14:46:39 by ekelen            #+#    #+#             */
/*   Updated: 2017/02/22 14:59:23 by ekelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		**ft_intmapnew(size_t rows, size_t columns)
{
	int **map;
	size_t i;

	i = 0;
	map = (int **)ft_memalloc((sizeof(int *) * rows));
	if (!map)
		return (NULL);
	while (i < rows)
	{
		if(!(*(map + (int)i) = (int *)ft_memalloc((sizeof(int) * columns))))
			return (NULL);
		ft_memset(map[i], (int)0, columns);
		i++;
	}
	return (map);
}
