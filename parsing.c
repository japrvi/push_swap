/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:16:59 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/12/09 14:20:28 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sign(char c);

static int isNumber(char c)
{
	return (c >= '0' && c <= '9');
}

static int	is_sign(char c)
{
	if (c == '-')
		return (-1);
	else if (c == '+')
		return (1);
	else
		return (0);
}

int		ft_check_format(char *cadena)
{
	static char	*dup;
	static int	i = 0;
	int			res;

	if (cadena)
	{
		dup = ft_strdup(cadena);
		i = 0;
	}
	while (dup[i] == ' ')
	{
		i++;
	}
	res = ft_atoi_c(dup + i, &i);
	return (res);
}

int	ft_atoi_c(char *cadena, int *i)
{
	unsigned int	res;
	int				sign;
	register int	j;

	j = *i;
	res = 0;
	if (is_sign(cadena[j]))
		sign = is_sign(cadena[j++]);
	while (is_number(cadena[j]) && cadena[j])
	{
		res = res * 10 + (cadena[j++] - '0');
		if (sign == -1)
		{
		} 
	}
	if (cadena[j] == ' ' || !cadena[j])
	{
		*i = j;
		return (res);
	}
	else
		perror ("Hay un error en el formato del numero");
}
