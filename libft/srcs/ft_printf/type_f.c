/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanna <blanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 01:53:07 by blanna            #+#    #+#             */
/*   Updated: 2019/06/13 01:53:30 by blanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long double	ft_type_f(va_list ap, char *modi)
{
	long double arg;

	arg = 0;
	if (ft_strcmp(modi, "") == 0)
		arg = va_arg(ap, double);
	else if (ft_strcmp(modi, "l") == 0)
		arg = va_arg(ap, double);
	else if (ft_strcmp(modi, "L") == 0)
		arg = va_arg(ap, long double);
	return (arg);
}
