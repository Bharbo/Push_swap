#include "push_swap.h"

void	ft_sa(t_ps *data, int i)
{
	int m;

	if (LEN_A >= 2)
	{
		m = ARR_A[0];
		ARR_A[0] = ARR_A[1];
		ARR_A[1] = m;
	}
	if (i != 1)
	{
		if (!data->av_ch)
			ft_putendl("sa");
		if (data->v == 1)
			ft_print_op(data);
	}
}

void	ft_sb(t_ps *data, int i)
{
	int m;

	if (LEN_B >= 2)
	{
		m = ARR_B[0];
		ARR_B[0] = ARR_B[1];
		ARR_B[1] = m;
	}
	if (i != 1)
	{
		if (!data->av_ch)
			ft_putendl("sb");
		if (data->v == 1)
			ft_print_op(data);
	}
}

void	ft_ss(t_ps *data)
{
	ft_sa(data, 1);
	ft_sb(data, 1);
	if (!data->av_ch)
		ft_putendl("ss");
	if (data->v == 1)
		ft_print_op(data);
}

void	ft_sa_b(t_ps *data)
{
	if (LEN_B >= 2)
	{
		if (ARR_B[0] < ARR_B[1])
		{
			ft_ss(data);
			return ;
		}
	}
	ft_sa(data, 0);
}

void	ft_sb_a(t_ps *data)
{
	if (LEN_A >= 2)
	{
		if (ARR_A[0] > ARR_A[1])
		{
			ft_ss(data);
			return ;
		}
	}
	ft_sb(data, 0);
}
