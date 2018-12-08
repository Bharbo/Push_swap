#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;

	if (!s || start > ft_strlen(s))
		return (0);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == 0)
		return (0);
	else
		sub = ft_strncpy(sub, &s[start], len);
	sub[len] = '\0';
	return (sub);
}
