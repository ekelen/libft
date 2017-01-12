/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelen <ekelen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 17:11:28 by ekelen            #+#    #+#             */
/*   Updated: 2016/12/09 16:14:13 by ekelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
	{
		while (*s != '\0')
		{
			(*f)(s);
			s++;
		}
	}
	return ;
}

/*
** Applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary.
**
** Param. #1
** The string to iterate.
** 
** Param. #2
** The function to apply to each character of s.
**
** Return value
** None.
*/