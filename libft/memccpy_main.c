#include "libft.h"

void *memccpy(void *dest, const void *src, int c, size_t n);

int main (void)
{
   unsigned char src[9] = "123456789";
   unsigned char dst[9]="";
   memccpy(dst, src, '7', 8);
   printf("%s\n", dst);
   return(0);
}
