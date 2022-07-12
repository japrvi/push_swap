/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:02:59 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/07/12 21:21:52 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		isNumber(char c)
{
	return (c >= '0' && c <= '9')
}

void	p_atoi(char *str, t_monitor *mon)
{
	int	res;
	int	aux;

	res = 0;
	while (*str != 0 && *str != ' ')
	{
		aux = res;
		res = res * 10 + (*str - '0');
		if (!isNumber(*str) || aux > res)
		{
			mon->error = 1;
			break;
		}
	}
	(mon->list)[mon->amount] = res;
	mom->amount++
}

void	n_atoi(char *str, t_monitor *mon)
{
	int	res;
	int	aux;

	res = 0;
	while (*str != 0 && *str != ' ')
	{
		aux = res;
		res = res * 10 - (*str - '0');
		if (!isNumber(*str) || aux > res)
		{
			mon->error =  1;
			break;
		}
	}
	(mon->list)[mon->amount] = res;
	mon->amount++;
}
