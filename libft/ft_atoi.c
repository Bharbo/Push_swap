#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long value;
	int sign;

	value = 0;
	sign = 1;
	while(IS_SPACE(*str))
		++str;
	if(*str == '+' || *str == '-')
	{
		if(*str == '-')
			sign = -1;
		else
			sign = 1;
		str++;
	}
	while(ft_isdigit(*str))
	{
		value = value * 10;
		value = value + (*str - '0');
		if(value < 0)
			return (int)(sign == 1 ? 0 : -1);
		str++;
	}
	return (value * sign);
}
