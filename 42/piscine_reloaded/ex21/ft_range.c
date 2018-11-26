#include <unistd.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *dst;
	int i;

	if (min >= max)
		return (NULL);
	dst = (int*)malloc(sizeof(max - min));
	i = 0;
	while (min < max)
	{
		dst[i] = min;
		i++;
		min++;
	}
	return (dst);
}
