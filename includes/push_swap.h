#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define ARR_A (data->a)
# define ARR_B (data->b)
# define LEN_A (data->lena)
# define LEN_B (data->lenb)
# define BAD_EXIT {ft_free_data(data);return (ft_novalid(-1));}
# define GOOD_EXIT {ft_free_data(data);return (0);}
# define INIT_PIVOT {j = -1; ls = 0; mr = 0; pivot = arr[i];}
# include "../libft/includes/libft.h"
# include "../libft/includes/ft_printf.h"
# include "../libft/includes/get_next_line.h"
# include <limits.h>

typedef	struct		s_ps
{
	int				lena;
	int				lenb;
	int				*a;
	int				*b;
	int				v;
	int				av_ch;
	struct s_ps		*next;
}					t_ps;

int					main(int ac, char **av);

int					ft_checker(int ac, char **av);
int					ft_check_is_num(char **av, int i, int m);
int					ft_count(char **av, int i, int j);
int					check_doubles(t_ps	*data);
int					ft_novalid(int n);

int					ft_cheak_sort_increase(int *arr, int size);
int					ft_cheak_sort_decrease(int *arr, int size);
int					ft_presort_3(t_ps *data, int size);

t_ps				*ft_init_struct(int len);

void				sorting(t_ps *data, int size, char steck);
int					ft_partition(t_ps *data, int size, char stack);
void				sort_up_to_3_a(t_ps *data, int size);
int					sort_3_a(t_ps *data);
void				sort_3a_1(t_ps *data);
void				sort_3a_2(t_ps *data);
void				sort_up_to_3_b(t_ps *data, int size);
int					sort_3_b(t_ps *data, int size);
int					ft_pivot(int size, int *arr);
int					ft_start_num(int *arr, int size, int pivot, char c);
int					cut_in_half_a(t_ps *data, int pivot, int begin, int size);
int					cut_in_half_b(t_ps *data, int pivot, int begin, int size);
void				go_to_begin(t_ps *data, int len, int begin, char c);

void				ft_sa(t_ps	*data, int i);
void				ft_sb(t_ps	*data, int i);
void				ft_ss(t_ps	*data);
void				ft_pa(t_ps *data);
void				ft_pb(t_ps *data);
void				ft_ra(t_ps *data, int k);
void				ft_rb(t_ps *data, int k);
void				ft_rr(t_ps *data);
void				ft_rra(t_ps *data, int k);
void				ft_rrb(t_ps *data, int k);
void				ft_rrr(t_ps *data);
void				ft_sb_a(t_ps *data);
void				ft_sa_b(t_ps *data);

void				ft_print_op(t_ps *data);
void				ft_print_a(t_ps *data, int a_minus_b);
void				ft_print_b(t_ps *data, int a_minus_b);

int					ft_ko_ok(t_ps *data);
void				ft_check_op(char *str, t_ps *data);
int					ft_read_input(t_ps *data);

int					ft_add_to_array(t_ps *data, int ac, char **av);
long long int		ft_atoi_n(const char *s, int n);
void				ft_free_data(t_ps *data);
int					ft_max_num(int *arr, int size);
int					ft_min_num(int *arr, int size);

#endif
