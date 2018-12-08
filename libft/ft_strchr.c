#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (*s != (char)c && *s != '\0')
		s++;
		if (*s != (char)c)
			return (NULL);
		else
			return ((char*)s);
}
/*
char *strchr(const char *s, int c)
{
    while (s[0] != c && s[0] != '\0')
        s++;
    if (s[0] == '\0')
        return NULL;
    else
        return (char *)s;
}
*/
