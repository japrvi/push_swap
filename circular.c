/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circular.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:58:25 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/12/10 19:48:31 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_first(t_circular *list, t_node_s *element)
{
	if (list)
	{
		if (list->first)
		{	
			element->next = list->first;
			element->previous = list->first->previous;
			list->first->previous = element;
			list->first = element;
		}
		else
		{
			list->first = element;
			list->last = element;
		}
	}
}

void	clear(t_circular *list)
{
	t_node_s	*it;
	t_node_s	*last;
	t_node_s	*aux;

	last = list->last;
	it = list->first;
	if (list)
	{
		while (it != last)
		{
			aux = it;
			it = it->next;
			free(aux);
		}
	}
	free(last);
	free(list);
	list = NULL;
}
