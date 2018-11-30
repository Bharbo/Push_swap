#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *s1;
	char *s2;
	size_t i;
	char let;

	s1 = (char *)dest;
	s2 = (char *)src;
	let = (char)c;
	i = -1;
	while(++i < n && let != s2[i])
		s1[i] = s2[i];
	if(let == s2[i])
		return(NULL);
	return((void *)dest);
}
