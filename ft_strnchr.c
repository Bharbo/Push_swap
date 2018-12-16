#include "libft.h"

char	*ft_strnchr(const char *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (s[i] && i < n)
	{
		if (s[i] == (char)c)
			return ((char*)s + i);
		i++;
	}
	return (NULL);
}
