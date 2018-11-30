#include "libft.h"

int memcmp(const void *str1, const void *str2, size_t n);

int main()
{
	// Исходные массивы
   unsigned char src[15]="1234567890";
   unsigned char dst[15]="123456789k";
   // Сравниваем первые 10 байт массивов
   // и результат выводим на экран
   if (memcmp(src, dst, 10) == 0)
      printf("Области памяти идентичные.\n");
   else
      printf("Области памяти отличаются.\n");
   return 0;
}
