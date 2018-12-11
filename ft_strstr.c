/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 16:46:13 by blanna            #+#    #+#             */
/*   Updated: 2018/12/11 16:46:14 by blanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *find)
{
	int i;
	int fi;

	i = 0;
	while (str[i] != '\0')
	{
		fi = 0;
		while (str[i + fi] == find[fi])
		{
			fi++;
			if (find[fi] == '\0')
				return (&str[i]);
		}
		i++;
	}
	if (find[0] == '\0')
		return (str);
	return (NULL);
}
