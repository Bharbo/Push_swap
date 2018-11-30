#include "libft.h"

void *memcpy(void *dest, const void *src, size_t n);

int main (void)
{
   // Массив источник данных
   unsigned char src[9] = "123456789";

   // Массив приемник данных
   unsigned char dst[9]="";

   // Копируем 6 байт из массива src в массив dst
   memcpy(dst, src, 6);

   // Вывод массива dst на консоль
   printf("%s\n", dst);

   return(0);
}
