#include "libft.h"

size_t ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

char	*ft_strrchr(const char *s, int c)
{
	char *str;
	int len;

	str = (char *)s;
	len = ft_strlen(str);
	while (str[len] != (char)c)
	{
		if (str[len] == (char)c)
			return (str);
		len--;
	}
	return (NULL);
}
