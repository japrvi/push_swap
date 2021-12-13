/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:29:24 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/12/13 15:42:33 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_circular *stack, char c)
{
	t_node_s	*first;
	t_node_s	*second;
	t_node_s	*aux;

	first = stack->first;
	second = stack->first->next;
	aux = second;
	second->next = first;
	second->previous = first->previous;
	first->next = aux;
	first->previous = aux->next;
	if (c)
	{
		write(1, "s", 1);
		if (c == 'a')
			write(1, "a\n", 2);
		if (c == 'b')
			write(1, "b\n", 2);
	}
}

void	swap_s(t_circular *stack_a, t_circular *stack_b)
{
	swap(stack_a, 0);
	swap(stack_b, 0);
	write(1, "ss\n", 3);
}

void	push(t_circular *stack_1, t_circular *stack_2, char c)
{
	t_node_s	*element;

	element = pop(stack_1);
	add_first(stack_2,  element);
	if (c)
	{
		write(1, "p", 1);
		if (c == 'a')
			write(1, "a\n", 2);
		if (c == 'b')
			write(1, "b\n", 2);
	}
}
