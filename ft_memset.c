#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ar;
	size_t	i;

	ar = b;
	i = 0;
	while (i < len)
	{
		ar[i] = c;
		i++;
	}
	return (b);
}
