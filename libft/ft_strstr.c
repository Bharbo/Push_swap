#include "libft.h"

char	*ft_strstr(char *str, char *find)
{
	int i;
	int find_i;

	i = 0;
	while (str[i] != '\0')
	{
		find_i = 0;
		while (str[i + find_i] == find[find_i])
		{
			find_i++;
			if (find[find_i] == '\0')
				return (&str[i]);
		}
		i++;
	}
	if (find[0] == '\0')
		return (str);
	return (NULL);
}
