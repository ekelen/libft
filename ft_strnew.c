/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelen <ekelen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 17:55:52 by ekelen            #+#    #+#             */
/*   Updated: 2017/01/12 12:42:19 by ekelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new_str;

	new_str = (char *)ft_memalloc(size + 1);
	if (!new_str)
		return (NULL);
	ft_memset(new_str, (int)'\0', size + 1);
	return (new_str);
}

// mallocs fresh string of t_size size, terminated by \0. all chars initialized to \0.
// uses memset to put null chars in string.
