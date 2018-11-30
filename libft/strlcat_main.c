#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, size_t n);

int main (void)
{    
	size_t r;
   char app[1024]="12345678901234567890";
   char dst[1024]="1234567890";
   r = ft_strlcat(dst, app, 13);
   printf ("len: %ld\n", r);
   return 0;
}
