#include "libft.h"

char	*ft_strcat(char *dest, const char *src);

int main (void)
{    
   // Массив источник данных
   char app[1024]="вторая строка";
 
   // Массив приемник данных
   char dst[1024]="первая строка";

   // Добавляем строку из массива src в массив dst. 
   ft_strcat(dst, app);

   // Вывод массива dst на консоль
   printf ("dst: %s\n",dst);

   return 0;
}
