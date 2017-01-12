/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelen <ekelen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 10:13:52 by ekelen            #+#    #+#             */
/*   Updated: 2017/01/12 12:45:00 by ekelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t i;

	if (s)
	{
		i = ft_strlen(s);
		while ((int)i >= 0)
		{
			s[i] = '\0';
			i--;
		}
	}
}

/*
** Sets all chars in string to \0. Returns void.
*/
