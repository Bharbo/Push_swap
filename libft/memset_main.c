#include "libft.h"

void  *ft_memset(void *b, int c, size_t len);

int main()
{
	unsigned char src[15] = "123456789";
	ft_memset(src, '3', 10);
	printf("%s\n", src);
	return (0);
}
