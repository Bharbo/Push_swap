#include "push_swap.h"

/*
** возвращаем такой pivot, который будет разделять стэк на числа 
** больше pivot и числа меньше pivot. При этом количество чисел с 
** каждой стороны будет одинаковым или почти одинаковым 
** (если количество чисел в стэке четное)
*/
int		ft_pivot(int sz, int *arr)
{
	int i;
	int	j;
	int ls;
	int mr;
	int pivot;

	i = -1;
	pivot = arr[0];
	if (sz <= 2)
		return (arr[0]);
	while (++i < sz)
	{
		(INIT_PIVOT);
		while (++j < sz)
		{
			if ((i == sz - 1) && (j == sz - 1))
				break ;
			(i == j ? j++ : 0);
			if (j < sz)
				arr[j] < pivot ? ls++ : mr++;
		}
		if (((ls == mr) && sz % 2 == 1) || ((ls - mr == 1) && sz % 2 == 0))
			return (pivot);
	}
	return (pivot);
}

int		ft_start_num(int *arr, int sz, int pivot, char c)
{
	int i;

	i = 0;
	while (i < sz)
	{
		if (c == 'a')
		{
			if (arr[i] >= pivot)
				return (arr[i]);
		}
		else if (c == 'b')
		{
			if (arr[i] <= pivot)
				return (arr[i]);
		}
		i++;
	}
	return (0);
}
