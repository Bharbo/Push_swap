#include "push_swap.h"

int		ft_checker(int ac, char **av)
{
	int			i;
	int			j;
	int			size;
	long long	elem_arr;

	size = 0;
	i = 0;
	while (++i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			while (av[i][j] == ' ' && av[i][j] != '\0')
				j++;
			elem_arr = j;
			if (!ft_check_is_num(av, i, elem_arr))
				return (-1);
			elem_arr = ft_atoi(av[i] + j);
			if (elem_arr < INT_MIN || elem_arr > INT_MAX)
				return (-1);
			j = ft_count(av, i, j);
			size++;
		}
	}
	return (size);
}

int		ft_check_is_num(char **av, int i, int j)
{
	if (av[i][j] == '+' || av[i][j] == '-')
		j++;
	if (av[i][j] && !ft_isdigit(av[i][j]))
		return (0);
	return (1);
}

int		ft_count(char **av, int i, int j)
{
	if (av[i][j] == '+' || av[i][j] == '-')
		j++;
	while (av[i][j] && ft_isdigit(av[i][j]))
		j++;
	return (j);
}

int		check_doubles(t_ps *data)
{
	int	i;
	int j;

	i = -1;
	while (++i < LEN_A)
	{
		j = 0;
		while (j < i)
		{
			if (ARR_A[j++] == ARR_A[i])
				return (0);
		}
	}
	return (1);
}

int		ft_novalid(int n)
{
	n == -1 ? ft_putendl("Error") : 0;
	return (0);
}
