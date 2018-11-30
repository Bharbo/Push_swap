#include "libft.h"

void *memchr(const void *buf, int ch, size_t n);

int main()
{
unsigned char src[10] = "1234567890";
  char *sym;
  printf("old %s\n", src);
  sym = (char *)memchr(src,'4',10);
  if(sym != NULL)
	  sym[0] = '!';
  printf("new %s\n", src);
  return(0);
}
