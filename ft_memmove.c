#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
	char *s1;
	char *s2;
	size_t i;

	s1 = (char *)dst;
	s2 = (char *)src;
	if(dst < src)
	{
		i = -1;
		while(++i < n)
			s1[i] = s2[i];
	}
	else
		while(n > 0)
		{
			n--;
			s1[n] = s2[n];	
		}
	return((void *)dst);
}
