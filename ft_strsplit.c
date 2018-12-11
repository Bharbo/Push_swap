/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 16:46:05 by blanna            #+#    #+#             */
/*   Updated: 2018/12/11 19:10:02 by blanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordlen(char const *str, char c)
{
	int		len;

	len = 0;
	while (*str == c)
		str++;
	while (*str != c && *str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

int			wordcount(char const *str, char c)
{
	int		count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != c && *str != '\0')
			count++;
		while (*str != c && *str != '\0')
			str++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	int		k;
	int		i;
	int		j;
	char	**part2;

	if (!s)
		return (0);
	if (!(part2 = (char **)malloc(sizeof(*part2) * (wordcount(s, c) + 1))))
		return (0);
	i = 0;
	k = 0;
	while (i < wordcount(s, c))
	{
		j = 0;
		if (!(part2[i] = ft_memalloc(wordlen(&s[k], c) + 1)))
			part2[i] = 0;
		while (s[k] == c)
			k++;
		while (s[k] != c && s[k] != '\0')
			part2[i][j++] = s[k++];
		part2[i][j] = '\0';
		i++;
	}
	part2[i] = 0;
	return (part2);
}
