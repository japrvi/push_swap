/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:56:21 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/07/13 20:57:01 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear(t_circular *list)
{
	t_node_s	*it;
	t_node_s	*aux;
	t_node_s	*last;

	it = list->first;
	last = list->last;
	if (last)
	{
		if (it)
		{
			while (it != last)
			{
				aux = it;
				it = it->next;
				delete_node(aux);
			}
		}
		delete_node(last);
	}
}


void	clean_all(t_monitor *mon)
{
	if (mon->list)
		free(mon->list);
	if (mon->nlist)
		free(mon->nlist);
	if (mon->stack_a.clean)
		clear(&(mon->stack_a));
	if (mon->stack_b.clean)
		clear(&(mon->stack_b));
}
