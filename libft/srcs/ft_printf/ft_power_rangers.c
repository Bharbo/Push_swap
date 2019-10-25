/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power_rangers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanna <blanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 01:45:03 by blanna            #+#    #+#             */
/*   Updated: 2019/06/14 19:24:46 by blanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_power_rangers(char *str, const char *src, size_t len1, size_t len2)
{
	char	*res;

	if (!(res = ft_strnew(len1 + len2)))
		return (NULL);
	if (str)
	{
		ft_strncpy(res, str, len1);
		free(str);
	}
	ft_strncpy(res + len1, src, len2);
	return (res);
}
