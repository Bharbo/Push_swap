#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;
	int i;

	i = 0;
	str = (char *)s;
	while (str[i] != (char)c)
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
	}
	return (str);
}
