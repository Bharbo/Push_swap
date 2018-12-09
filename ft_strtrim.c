#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		i;
	int		len;

	if (s == 0)
		return (0);
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		len--;
		i++;
	}
	if (len < 0)
		len = 0;
	res = malloc(sizeof(char) * (len + 1));
	if (res == 0)
		return (0);
	s = s + i;
	i = 0;
	while (i < len)
	{
		res[i] = *s++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
