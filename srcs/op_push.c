#include "push_swap.h"

void	ft_pa(t_ps *data)
{
	int	m1;
	int	m2;
	int	i;

	if (LEN_B != 0)
	{
		m1 = ARR_A[0];
		ARR_A[0] = ARR_B[0];
		LEN_A++;
		i = 0;
		while (++i < LEN_A)
		{
			m2 = ARR_A[i];
			ARR_A[i] = m1;
			m1 = m2;
		}
		i = -1;
		while (++i < LEN_B - 1)
			ARR_B[i] = ARR_B[i + 1];
		LEN_B--;
	}
	if (!data->av_ch)
		ft_putendl("pa");
	if (data->v == 1)
		ft_print_op(data);
}

void	ft_pb(t_ps *data)
{
	int	m1;
	int	m2;
	int	i;

	if (LEN_A != 0)
	{
		m1 = ARR_B[0];
		ARR_B[0] = ARR_A[0];
		LEN_B++;
		i = 0;
		while (++i < LEN_B)
		{
			m2 = ARR_B[i];
			ARR_B[i] = m1;
			m1 = m2;
		}
		i = -1;
		while (++i < LEN_A - 1)
			ARR_A[i] = ARR_A[i + 1];
		LEN_A--;
	}
	if (!data->av_ch)
		ft_putendl("pb");
	if (data->v == 1)
		ft_print_op(data);
}
