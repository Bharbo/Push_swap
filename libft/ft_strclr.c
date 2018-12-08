#include "libft.h"

void	ft_strclr(char *s)
{
	if(s != 0)
	s = ft_memset(s, '\0', ft_strlen(s));
}
