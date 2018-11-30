#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;
	size_t end;

	i = 0;
	while (dest[i] != '\0')
		++i;
	j = 0;
	while(src[end] != '\0')
		++end;
	while (src[j] != '\0' && i + 1 < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if(n <= i)
		end = end + n;
	else
		end = end + i;
	dest[i] = '\0';
	return (end);
}
