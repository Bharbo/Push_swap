#include "push_swap.h"

void	ft_ra(t_ps *data, int k)
{
	int	m;
	int i;

	if (LEN_A != 0)
	{
		i = 0;
		m = ARR_A[0];
		while (++i < LEN_A)
			ARR_A[i - 1] = ARR_A[i];
		ARR_A[LEN_A - 1] = m;
	}
	if (k != 1)
	{
		if (!data->av_ch)
			ft_putendl("ra");
		if (data->v == 1)
			ft_print_op(data);
	}
}

void	ft_rb(t_ps *data, int k)
{
	int	m;
	int i;

	if (LEN_B != 0)
	{
		i = 0;
		m = ARR_B[0];
		while (++i < LEN_B)
			ARR_B[i - 1] = ARR_B[i];
		ARR_B[LEN_B - 1] = m;
	}
	if (k != 1)
	{
		if (!data->av_ch)
			ft_putendl("rb");
		if (data->v == 1)
			ft_print_op(data);
	}
}

void	ft_rr(t_ps *data)
{
	ft_ra(data, 1);
	ft_rb(data, 1);
	if (!data->av_ch)
		ft_putendl("rr");
	if (data->v == 1)
		ft_print_op(data);
}
