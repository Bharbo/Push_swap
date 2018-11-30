#include "libft.h"

char	*ft_strrchr(const char *s, int c);

int main (void)
{    
   // Массив со строкой для поиска
   char str [11]="0173456789";
   // Код искомого символа
   int ch = '7';
   // Указатель на искомую переменную в строке,
   // по которой осуществляется поиск.
   char *ach;
  
   // Ищем символ ‘6’:
   ach = strrchr (str,ch);

   // Выводим результат на консоль
   if (ach==NULL)
      printf ("Символ в строке не найден\n");
   else
      printf ("Искомый символ в строке на позиции # %ld\n", ach-str+1);
   return 0;
}
