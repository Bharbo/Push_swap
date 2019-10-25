#include "push_swap.h"

int		ft_cheak_sort_increase(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (arr[i] > arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int		ft_cheak_sort_decrease(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (arr[i] < arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int		ft_presort_3(t_ps *data, int size)
{
	if (size == 3)
	{
		if (ft_cheak_sort_decrease(ARR_A, size))
		{
			ft_ra(data, 0);
			ft_sa(data, 0);
		}
		else if (ARR_A[0] == ft_max_num(ARR_A, LEN_A) && \
		ARR_A[1] == ft_min_num(ARR_A, LEN_A))
			ft_ra(data, 0);
		else if (ARR_A[1] == ft_max_num(ARR_A, LEN_A) && \
		ARR_A[2] == ft_min_num(ARR_A, LEN_A))
			ft_rra(data, 0);
		else if (ARR_A[1] == ft_max_num(ARR_A, LEN_A) && \
		ARR_A[0] == ft_min_num(ARR_A, LEN_A))
		{
			ft_rra(data, 0);
			ft_sa(data, 0);
		}
		else if (ARR_A[2] == ft_max_num(ARR_A, LEN_A) && \
		ARR_A[1] == ft_min_num(ARR_A, LEN_A))
			ft_sa(data, 0);
		return (1);
	}
	return (0);
}

void	ft_free_data(t_ps *data)
{
	free(ARR_A);
	free(ARR_B);
	free(data);
}
