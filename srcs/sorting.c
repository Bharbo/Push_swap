#include "push_swap.h"

int			ft_partition(t_ps *data, int size, char stack)
{
	int	pivot;
	int	begin;
	int res;

	if (stack == 'a')
	{
		if (ft_cheak_sort_increase(ARR_A, size))
			return (size);
		pivot = ft_pivot(size, ARR_A);
		begin = ft_start_num(ARR_A, size, pivot, stack);
		res = cut_in_half_a(data, pivot, begin, size);
		return (res);
	}
	if (stack == 'b')
	{
		pivot = ft_pivot(size, ARR_B);
		begin = ft_start_num(ARR_B, size, pivot, stack);
		res = cut_in_half_b(data, pivot, begin, size);
		return (res);
	}
	return (0);
}

void		sort_up_to_3_a(t_ps *data, int size)
{
	while (size > 0)
	{
		if (size == 1)
			return ;
		if (ARR_A[0] > ARR_A[1])
			ft_sa_b(data);
		if (size == 2)
			return ;
		else if (size == 3)
			size = sort_3_a(data);
	}
}

void		sort_up_to_3_b(t_ps *data, int size)
{
	while (size > 0)
	{
		if (size == 1)
		{
			ft_pa(data);
			return ;
		}
		if (ARR_B[0] < ARR_B[1])
			ft_sb_a(data);
		if (size == 2)
		{
			ft_pa(data);
			ft_pa(data);
			return ;
		}
		else if (size == 3)
			size = sort_3_b(data, size);
	}
}

void		sorting(t_ps *data, int size, char stack)
{
	int pindx;

	if (size <= 3)
		stack == 'a' ? sort_up_to_3_a(data, size) : sort_up_to_3_b(data, size);
	else
	{
		if (stack == 'a')
		{
			pindx = ft_partition(data, size, 'a');
			if (pindx != size)
			{
				sorting(data, pindx, 'a');
				sorting(data, size - pindx, 'b');
			}
		}
		else
		{
			pindx = ft_partition(data, size, 'b');
			sorting(data, size - pindx, 'a');
			sorting(data, pindx, 'b');
		}
	}
}
