#include "libft.h"

char	*ft_strnstr(char *str, char *find, size_t n)
{
	size_t i;
	size_t find_i;

	if (find[0] == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] != '\0' || i < n)
	{
		find_i = 0;
		while (find[find_i] && str[i] && str[i] == find[find_i])
		{
			find_i++;
			i++;
		}
		if (find[find_i] == '\0')
			return ((char *)&str[i - find_i]);
		i = i - find_i + 1;
	}
	return (NULL);
}

int main()
{

    char    *s1 = "MZIRIBMZIRIBMZE123";
    char    *s2 = "MZIRIBMZE";
  //  size_t  max = strlen(s2);

    char    *i1 = ft_strnstr(s1, s2, 1);
    char    *i2 = ft_strnstr(s1, s2, 3);
	char    *i3 = ft_strnstr(s1, s2, 5);

    printf("strnstr: %s\nft_strnstr: %s\n", i1,i2);
    return 0;
}

/*int main (void)
{    
   // Массив со строкой для поиска
   char str1 [11]="0123456789";
   // Набор символов, которые должны входить в искомый сегмент
   char str2 [10]="567";
   // Переменная, в которую будет занесен адрес первой найденной строки
   char *istr;
   //Поиск строки
   istr = ft_strnstr (str1,str2,5);
   //Вывод результата поиска на консоль
   if (istr == NULL)
      printf ("Строка не найдена\n");
   else
      printf ("Искомая строка начинается с символа %ld\n",istr-str1+1);
   return 0;
}*/
