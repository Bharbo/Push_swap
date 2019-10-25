#include "push_swap.h"

int		sort_3_b(t_ps *data, int size)
{
	if (ARR_B[0] == ft_max_num(ARR_B, size))
	{
		ft_pa(data);
		size--;
	}
	if (ARR_B[1] == ft_max_num(ARR_B, size))
	{
		ft_sb_a(data);
		ft_pa(data);
		size--;
	}
	if (ARR_B[2] == ft_max_num(ARR_B, size))
	{
		ft_rb(data, 0);
		ft_sb_a(data);
		ft_pa(data);
		ft_rrb(data, 0);
		size--;
	}
	return (size);
}
