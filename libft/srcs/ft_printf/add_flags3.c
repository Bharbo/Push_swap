/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_flags3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanna <blanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 01:40:23 by blanna            #+#    #+#             */
/*   Updated: 2019/06/13 01:40:53 by blanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_pres_norm(t_printf *data, char *str, int prec)
{
	if ((data->tp[0] == 'o' && data->sh) || prec == -1)
		return (str);
	*str = 0;
	return (str);
}
