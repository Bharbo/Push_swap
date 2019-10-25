#include "push_swap.h"

void	ft_rra(t_ps *data, int k)
{
	int m;
	int i;

	if (LEN_A != 0)
	{
		m = ARR_A[LEN_A - 1];
		i = LEN_A;
		while (--i > 0)
			ARR_A[i] = ARR_A[i - 1];
		ARR_A[0] = m;
	}
	if (k != 1)
	{
		if (!data->av_ch)
			ft_putendl("rra");
		if (data->v == 1)
			ft_print_op(data);
	}
}

void	ft_rrb(t_ps *data, int k)
{
	int m;
	int i;

	if (LEN_B != 0)
	{
		m = ARR_B[LEN_B - 1];
		i = LEN_B;
		while (--i > 0)
			ARR_B[i] = ARR_B[i - 1];
		ARR_B[0] = m;
	}
	if (k != 1)
	{
		if (!data->av_ch)
			ft_putendl("rrb");
		if (data->v == 1)
			ft_print_op(data);
	}
}

void	ft_rrr(t_ps *data)
{
	ft_rra(data, 1);
	ft_rrb(data, 1);
	if (!data->av_ch)
		ft_putendl("rrr");
	if (data->v == 1)
		ft_print_op(data);
}
