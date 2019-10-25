#include "checker.h"

int			ft_ko_ok(t_ps *data)
{
	if (!ft_cheak_sort_increase(ARR_A, LEN_A) || LEN_B > 0)
		return (0);
	return (LEN_B == 0 ? 1 : 0);
}

void		ft_check_op(char *op, t_ps *data)
{
	if (ft_strequ(op, "sa"))
		ft_sa(data, 0);
	else if (ft_strequ(op, "sb"))
		ft_sb(data, 0);
	else if (ft_strequ(op, "ss"))
		ft_ss(data);
	else if (ft_strequ(op, "pa"))
		ft_pa(data);
	else if (ft_strequ(op, "pb"))
		ft_pb(data);
	else if (ft_strequ(op, "ra"))
		ft_ra(data, 0);
	else if (ft_strequ(op, "rb"))
		ft_rb(data, 0);
	else if (ft_strequ(op, "rr"))
		ft_rr(data);
	else if (ft_strequ(op, "rra"))
		ft_rra(data, 0);
	else if (ft_strequ(op, "rrb"))
		ft_rrb(data, 0);
	else if (ft_strequ(op, "rrr"))
		ft_rrr(data);
	else
		exit(ft_novalid(-1));
}

int			ft_read_input(t_ps *data)
{
	char	*str;
	int		i;

	i = 0;
	while (get_next_line(0, &str) > 0)
	{
		ft_check_op(str, data);
		free(str);
		i++;
	}
	ft_ko_ok(data) ? ft_putendl("OK") : ft_putendl("KO");
	ft_free_data(data);
	return (0);
}

int			main(int ac, char **av)
{
	t_ps	*data;
	int		len;

	ac = (ft_strequ(av[ac - 1], "-v") ? ac -= 1 : ac);
	if ((len = ft_checker(ac, av)) <= 0)
		return (ft_novalid(len));
	data = ft_init_struct(len);
	data->v = (av[ac] && ft_strequ(av[ac], "-v") ? 1 : 0);
	data->av_ch = (!ft_isdigit((int)av[0]) ? 1 : 0);
	if (!ft_add_to_array(data, ac, av))
		(BAD_EXIT);
	return (ft_read_input(data));
}
