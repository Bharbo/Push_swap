#include "libft.h"

char	*ft_strstr(char *str, char *find)
{
	int i;
	int fi;

	i = 0;
	while (str[i] != '\0')
	{
		fi = 0;
		while (str[i + fi] == find[fi])
		{
			fi++;
			if (find[fi] == '\0')
				return (&str[i]);
		}
		i++;
	}
	if (find[0] == '\0')
		return (str);
	return (NULL);
}
