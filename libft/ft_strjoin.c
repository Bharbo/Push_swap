#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	n1;
	size_t	n2;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
        return (NULL);
	n1 = ft_strlen(s1);
	n2 = ft_strlen(s2);
	s3 = ft_strnew(n1 + n2);
	if(!s3)
		return (NULL);
	i = 0;
    j = 0;
	while(i < n1)
	{
		s3[i] = s1[i];
		i++;
	}
	while(j < n2)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	return (s3);
}
