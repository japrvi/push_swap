/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circular.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:58:25 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/07/13 20:56:59 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	connection(t_node_s *node, t_node_s *next)
{
	node->next = next;
	next->previous = node;
}

void	add_first(t_circular *list, t_node_s *element)
{
	if (list->last)
	{
		if (list->first)
		{
			connection(element, list->first);
			connection(list->last, element);
			list->first = element;
		}
		else
		{
			list->first = element;
			connection(element, list->last);
			connection(list->last, element);
		}
	}
	else
		list->last = element;
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

t_node_s	*create_node(int content)
{
	t_node_s	*node;

	node = (t_node_s *) malloc(sizeof(t_node_s));
	node->content = content;
	node->next = node;
	node->previous = node;
	return (node);
}

t_node_s	*pop(t_circular *list)
{
	t_node_s	*first;

	first = list->first;
	if (first)
	{
		if (first->next = list->last)
			list->first = NULL;
		else
		{
			connection(first->next, list->last);
			connection(list->last, first->next);
			list->first = first->next;
		}
	}
	else
	{
		first = list->last;
		list->last = NULL;
	}
	return (first);
}
