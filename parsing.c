/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:16:59 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/07/25 20:53:14 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_monitor *mon, int argc, char **argv)
{
	int		i;
	char	*line;

	i = 1;
	mon->size = 1024;
	mon->nlist = (int *) malloc(sizeof(int) * 1024);
	while (i < argc)
	{
		line = argv[i++];
		parser(mon, line);
		if (mon->error == 1)
			break;
	}
}

void	parser(t_monitor *mon, char *line)
{
	char	c;
	int		error;

	c = *line;
	error = mon->error;
	while (c != 0 && error == 1)
	{
		if (c == '-')
		{
			line++;
			if (isNumber(c))
				n_atoi(line);
			else
				error = 1;
		}
		else if (isNumber(c))
			p_atoi(line);
		else if (c == ' ')
			line++;
	}
	mon->error = error;
}
