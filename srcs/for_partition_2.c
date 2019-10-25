#include "push_swap.h"

int		cut_in_half_a(t_ps *data, int pivot, int begin, int size)
{
	int i;
	int	len;

	len = size;
	i = 0;
	while (len > 0)
	{
		if (ARR_A[0] < pivot)
		{
			ft_pb(data);
			size--;
		}
		else
		{
			ft_ra(data, 0);
			i++;
		}
		len--;
	}
	if (LEN_A != size)
		go_to_begin(data, i, begin, 'a');
	return (size);
}

int		cut_in_half_b(t_ps *data, int pivot, int begin, int size)
{
	int	i;
	int	len;

	len = size;
	i = 0;
	while (len > 0)
	{
		if (ARR_B[0] > pivot)
		{
			ft_pa(data);
			size--;
		}
		else
		{
			ft_rb(data, 0);
			i++;
		}
		len--;
	}
	if (LEN_B != size && size != 0)
		go_to_begin(data, i, begin, 'b');
	return (size);
}

void	go_to_begin(t_ps *data, int len, int begin, char c)
{
	if (len == 0)
		return ;
	if (c == 'a')
	{
		while (ARR_A[0] != begin)
			ft_rra(data, 0);
	}
	else
	{
		while (ARR_B[0] != begin)
			ft_rrb(data, 0);
	}
}
