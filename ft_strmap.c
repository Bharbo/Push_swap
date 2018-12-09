#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *dest;
	int	i;

	i = 0;
	if (!s || !f)
		return (0);
	dest = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		if(!dest)
			return (0);
		{
			dest[i] = (*f)(s[i]);
			i++;
		}
	}
	return (dest);
}
