#include "push_swap.h"

t_ps			*ft_init_struct(int len)
{
	t_ps	*data;

	data = (t_ps *)malloc(sizeof(t_ps));
	data->lena = len;
	data->lenb = 0;
	data->v = 0;
	data->av_ch = 0;
	data->a = (int *)malloc(sizeof(int) * (len + 1));
	data->b = (int *)malloc(sizeof(int) * (len + 1));
	data->next = NULL;
	return (data);
}

long long int	ft_atoi_n(const char *s, int n)
{
	long long int	value;
	long long int	sign;

	value = 0;
	sign = 1;
	s += n;
	while (*s == ' ' || *s == '\t' || *s == '\r' \
			|| *s == '\f' || *s == '\v' || *s == '\n')
		++s;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (ft_isdigit(*s))
	{
		value = value * 10;
		value = value + (*s - '0');
		if (value < 0)
			return (sign == 1 ? -1 : 0);
		s++;
	}
	return (value * sign);
}

int				ft_add_to_array(t_ps *data, int ac, char **av)
{
	int i;
	int j;
	int k;
	int	elem_arr;

	i = 0;
	k = 0;
	while (++i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			while (av[i][j] && av[i][j] == ' ')
				j++;
			elem_arr = ft_atoi_n(av[i], j);
			ARR_A[k++] = elem_arr;
			j = ft_count(av, i, j);
		}
	}
	if (!check_doubles(data))
		return (0);
	return (1);
}

int				ft_max_num(int *arr, int size)
{
	int i;
	int	m;

	i = 0;
	m = 0;
	if (size > 0)
	{
		m = arr[0];
		while (i < size)
		{
			if (arr[i] > m)
				m = arr[i];
			i++;
		}
	}
	return (m);
}

int				ft_min_num(int *arr, int size)
{
	int i;
	int	m;

	i = 0;
	m = 0;
	if (size > 0)
	{
		m = arr[0];
		while (i < size)
		{
			if (arr[i] < m)
				m = arr[i];
			i++;
		}
	}
	return (m);
}
