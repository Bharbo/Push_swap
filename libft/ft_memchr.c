#include "libft.h"

void *ft_memchr(const void *buf, int ch, size_t n)
{
	char *str;
	char let;
	size_t i;

	str = (char *)buf;
	let = (char)ch;
	i = -1;
	while(++i < n)
	{
		if(str[i] == let)
			return ((void *)&str[i]);
	}
	return(NULL);
}
