#include "push_swap.h"

void	sort_3a_1(t_ps *data)
{
	ft_ra(data, 0);
	ft_sa_b(data);
	ft_rra(data, 0);
	if (ARR_B[0] < ARR_B[LEN_B - 1])
		ft_rrb(data, 0);
	ft_sa_b(data);
}

void	sort_3a_2(t_ps *data)
{
	ft_ra(data, 0);
	ft_sa_b(data);
	ft_rra(data, 0);
	if (ARR_B[0] < ARR_B[LEN_B - 1])
		ft_rrb(data, 0);
}

int		sort_3_a(t_ps *data)
{
	if (ARR_A[0] < ARR_A[1] && ARR_A[1] < ARR_A[2])
		return (0);
	else if (ARR_A[0] > ARR_A[1] && ARR_A[1] > ARR_A[2])
	{
		ft_ra(data, 0);
		ft_sa_b(data);
	}
	else if (ARR_A[0] > ARR_A[1] && ARR_A[1] < ARR_A[2] && ARR_A[0] < ARR_A[2])
		ft_sa_b(data);
	else if (ARR_A[0] < ARR_A[1] && ARR_A[1] > ARR_A[2] && ARR_A[0] > ARR_A[2])
		sort_3a_1(data);
	else if (ARR_A[0] < ARR_A[1] && ARR_A[1] > ARR_A[2])
		sort_3a_2(data);
	else if (ARR_A[0] > ARR_A[1] && ARR_A[0] > ARR_A[2] && ARR_A[1] < ARR_A[2])
		ft_rra(data, 0);
	return (0);
}
