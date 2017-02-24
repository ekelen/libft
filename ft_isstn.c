#include "libft.h"

int		ft_isstn(int c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}
