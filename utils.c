/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:02:59 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/12/06 16:02:39 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(char *cadena)
{
	register int	i;
	char			*res;

	i = 0;
	while (cadena[i])
	{
		i++;
	}
	res = (char *) malloc(i);
	while (i >= 0)
	{
		res[i] = cadena[i];
		i--;
	}
	return (res);
}
