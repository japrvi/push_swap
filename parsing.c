/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:16:59 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/12/15 15:37:13 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		isNumber(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_atoi_m(char *s)
{
	long int		res;
	int				sign;
	unsigned int	i;

	res = 0;
	i = 0;
	sign = 
	while (isNumber(s[i]))
	{
		if (res >= INT16_MAX && sign == 0)
			error_msg(1);
		if (res <= 2147483648 && sign == 1)

	}
	return ((int) (res * sign));
}
