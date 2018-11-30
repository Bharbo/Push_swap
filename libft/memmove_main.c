#include "libft.h"

void *memmove(void *dst, const void *src, size_t n);

int main (void)
{
   unsigned char src[10] = "1234567890";
   printf("old: %s\n", src);
   memmove(&src[4], &src[3], 3);
   printf("new: %s\n", src);
   return(0);
}
