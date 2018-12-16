#include "libft.h"

char	*ft_strnchr(const char *s, int c, size_t n);

int main()
{    
   char str [11] = "0123456789";
   int ch = '\0';
   char *ach;
   ach = ft_strnchr(str, ch, 11);
   if (ach == NULL)
      printf ("Символ в строке не найден\n");
   else
	   printf ("%s\n", ach);
   return 0;
}
