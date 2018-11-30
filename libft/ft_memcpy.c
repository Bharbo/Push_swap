#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *s1;
	char *s2;
	size_t i;

	s1 = (char *)dest;
	s2 = (char *)src;
	i = -1;
	while(s1 && s2 && ++i < n)
		s1[i] = s2[i];
	return((void *)dest);
}
