#include "push_swap.h"

int			main(int ac, char **av)
{
	t_ps		*data;
	// char		*str;
	int			size;

	ac = (ft_strequ(av[ac - 1], "-v") ? ac -= 1 : ac);
	if ((size = ft_checker(ac, av)) <= 0)
		return (ft_novalid(size));
	data = ft_init_struct(size);
	data->v = (av[ac] && ft_strequ(av[ac], "-v") ? 1 : 0);
	if (!ft_add_to_array(data, ac, av))
		(BAD_EXIT);
	if (ft_cheak_sort_increase(ARR_A, LEN_A))
		(GOOD_EXIT);
	if (ft_presort_3(data, size))
		(GOOD_EXIT);
	sorting(data, size, 'a');
	ft_free_data(data);
	return (0);
}
