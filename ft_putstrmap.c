/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelen <ekelen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 17:55:52 by ekelen            #+#    #+#             */
/*   Updated: 2017/02/22 14:59:45 by ekelen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrmap(char **strmap)
{
	size_t i;

	i = 0;
	if (!strmap)
		return ;
	while (*(strmap + i))
	{
		ft_putendl(*(strmap + i));
		i++;
	}
	return ;
}