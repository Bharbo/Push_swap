#include "push_swap.h"

void	ft_print_a(t_ps *data, int a_minus_b)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	while (i < a_minus_b)
	{
		ft_printf("%-15d|\n", ARR_A[i]);
		i++;
	}
	while (j < LEN_B)
	{
		ft_printf("%-15d|   %-15d\n", ARR_A[i], ARR_B[j]);
		i++;
		j++;
	}
}

void	ft_print_b(t_ps *data, int a_minus_b)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	a_minus_b = -a_minus_b;
	while (i < a_minus_b)
	{
		ft_printf("%-15d|\n", ARR_B[i]);
		i++;
	}
	while (j < LEN_A)
	{
		ft_printf("%-15d|   %-15d\n", ARR_A[j], ARR_B[i]);
		i++;
		j++;
	}
}

void	ft_print_op(t_ps *data)
{
	int	a_minus_b;

	a_minus_b = LEN_A - LEN_B;
	ft_printf("---\n");
	ft_printf("@@@@@@@@@@@@@@@@   @@@@@@@@@@@@@@@@\n");
	ft_printf("a	   	   b\n");
	ft_printf("================   ================\n");
	a_minus_b >= 0 ? ft_print_a(data, a_minus_b) : ft_print_b(data, a_minus_b);
	ft_printf("================   ================\n");
}
