#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *dest;
	int	i;
	int j;

	i = 0;
	j = 0;
	if (!s || !f)
		return (0);
	dest = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		if(!dest)
			return (0);
		{
			dest[i] = (*f)(j, s[i]);
			i++;
			j++;
		}
	}
	return (dest);	
}
