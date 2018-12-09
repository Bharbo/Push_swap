#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t nstr)
{
	size_t	i;

	i = 0;
	while (i < nstr)
	{
		if (ft_strncmp((char *)&str[i], find, ft_strlen(find)) == 0)
		{
			if (i + ft_strlen(find) > nstr)
				return (NULL);
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
	if (ft_strlen(find) == 0 || find == NULL)
		return ((char *)str);
	if (ft_strlen(find) > nstr)
		return (NULL);
}
