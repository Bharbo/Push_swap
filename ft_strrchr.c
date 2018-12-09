#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char *src;

	src = str;
	while (*src)
		src++;
	if (c == 0)
		return ((char*)src);
	while (src > str)
	{
		src--;
		if (((char)*src) == c)
			return ((char*)src);
	}
	return (0);
}
