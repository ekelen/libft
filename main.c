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

	int tab[5] = {1, 2, 3, 4, 5};
	int **intmap = ft_intmapnew(3, 5);
	i = 0;
	int j = 0;
	while (i < 3)
	{
		j = 0;
		ft_memcpy(intmap[i], (int *)tab, sizeof(int) * 5);
		while (j < 5)
		{
			ft_putnbr(intmap[i][j]);
			j++;
		}
			ft_putchar('\n');
		i++;
	}
}
