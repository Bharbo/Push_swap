/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blanna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:30:00 by blanna            #+#    #+#             */
/*   Updated: 2018/11/22 00:00:05 by blanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_factorial(int nb)
{
  int r;
  int i;
  
  i = 1;
	if (i < nb)
		r = nb * ft_recursive_factorial(nb - 1);
		return r;
	if (nb == 0 || nb == 1)
		return 1;
	if (nb < 0 || nb >= 13)
		return 0;
}