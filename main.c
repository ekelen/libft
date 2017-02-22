# include "libft.h"

int main(void)
{
	// DELETE THIS FILE
	char **new_map;
	new_map = ft_strmapnew(5, 3);
	int i = 0;
	while (i < 5)
	{
		ft_strcpy(new_map[i], "cat");
		ft_putendl(new_map[i]);
		i++;
	}
}
