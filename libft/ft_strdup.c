#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(*src) * len + 1);
	if (!dest)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
