/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelen <ekelen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 09:06:54 by ekelen            #+#    #+#             */
/*   Updated: 2017/01/12 12:37:51 by ekelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*mem_area;

	i = 0;
	mem_area = (char *)malloc(sizeof(char) * size);
	if (!mem_area)
		return (NULL);
	while (i < size)
	{
		((char *)mem_area)[i] = 0;
		i++;
	}
	(*(char *)mem_area) = '\0';
	return (mem_area);
}

/*
Description:

Allocates (with malloc(3)) and returns a “fresh” memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL.

Param. #1
The size of the memory that needs to be allocated.

Return value
The allocated memory area.

Libc functions
malloc(3)
*/
