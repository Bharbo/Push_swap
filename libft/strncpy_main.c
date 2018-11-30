#include "libft.h"

char *ft_strncpy(char *s1, const char *s2, size_t n);

int main (void)
{    
   // Массив источник данных
   char src[10]="12\0003456789";
 
   // Массивы приемники данных
   char dst1[10]="1111111111";
   char dst2[10]="1111111111";

   // Счетчик
   int i;

   // Вывод массива src на консоль
   printf ("src:  ");
   for (i=0;i < 10;i++)
      printf (" %2d",(unsigned short) src[i]);
   printf ("\n ");

   // Копируем строку длиною не более трех символов из массива src в массив dst1. 
   strncpy (dst1, src,3);

   // Вывод массива dst1 на консоль
   printf ("dst1: ");
   for (i=0;i<10;i++)
      printf (" %2d",(unsigned short) dst1[i]);
   printf ("\n");

   // Копируем строку длиною не более семи символов из массива src в массив dst2. 
   strncpy (dst2, src,7);

   // Вывод массива dst2 на консоль
   printf ("dst2: ");
   for (i=0;i<10;i++)
      printf (" %2d",(unsigned short) dst2[i]);
   printf ("\n");

   return 0;
}
