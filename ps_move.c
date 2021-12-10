/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:29:24 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/12/10 19:48:28 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_circular *stack)
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
}

void	swap_s(t_circular *stack_a, t_circular *stack_b)
{
	swap(stack_a);
	swap(stack_b);
}
