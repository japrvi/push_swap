/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:16:59 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/07/13 20:57:08 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_monitor *mon, int argc, char **argv)
{
	int		i;
	char	*line;

	i = 1;
	mon->nlist = (int *) malloc(sizeof(int) * 1000);
	while (i < argc)
	{
		line = argv[i++];
		parser(mon, line);
		if (mon->error == 1)
			break;
	}
	return (mon->error);
}

void	parser(t_monitor *mon, char *line)
{
	char	c;

	c = *line;
	while (c != 0 && mon->error == 1)
	{
		if (c == '-')
		{
			line++;
			if (isNumber(c))
				n_atoi(line);
			else
				p_atoi(line);
		}
		else if (isNumber(c))
			p_atoi(line);
		else if (c == ' ')
			line++;
	}
}
