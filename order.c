/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:04:26 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/12/13 16:15:18 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	check_order_element(t_node_s *node, char c)
{
	t_node_s	nodo;

	nodo = *node;
	if (c == 'a')
	{
		if (nodo.content < node->next->content)
			nodo.order = 0;
		else
			nodo.order = 1;
	}
	else
	{
		if (nodo.content > node->next->content)
			nodo.order = 0;
		else
			nodo.order = 1;
	}
	return (nodo.order);
}

char	check_order_list(t_circular *stack, char c)
{
	t_node_s	*it;
	t_node_s	*last;
	char		order;

	order = 0;
	it = stack->first;
	last = stack->last;
	while (it != last)
	{
		order += check_order_element(it, c);
		it = it->next;
	}
	return (order);
}

void	check_no_repeat(t_circular	*stack, int value)
{
	t_node_s	*it;
	t_node_s	*last;

	it = stack->first;
	last = stack->last;
	while (it->content != value)
	{
		if (it = last)
			break;
		it = it->next;
	}
	if (it->content == value)
		error_msg(2);
}

void	error_msg(char error)
{
	if (error)
	{
		if (error == 1)
			perror();
		if (error == 2)
			perror();
		exit(0);
	}
}
