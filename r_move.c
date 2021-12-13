/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_move.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:22:22 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/12/13 15:50:17 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_circular *stack, char c)
{
	t_node_s	*nfirst;
	t_node_s	*nlast;

	nlast = stack->first;
	nfirst = stack->first->next;
	stack->first =  nfirst;
	stack->last = nlast;
	if (c)
	{
		write(1, "rr", 1);
		if (c == 'a')
			write(1, "a\n", 2);
		if (c == 'b')
			write(1, "a\n", 2);
	}
}

void	reverse_rotate_r(t_circular *stack_a, t_circular *stack_b)
{
	reverse_rotate(stack_a, 0);
	reverse_rotate(stack_b, 0);
	write(1, "rrr\n", 4);
}

void	rotate(t_circular *stack, char c)
{
	t_node_s	*nfirst;
	t_node_s	*nlast;

	nlast = stack->last->previous;
	nfirst = stack->last;
	stack->first =  nfirst;
	stack->last = nlast;
	if (c)
	{
		write(1, "r", 2);
		if (c == 'a')
			write(1, "a\n", 1);
		if (c == 'b')
			write(1, "a\n", 1);
	}
}

void	rotate_r(t_circular *stack_a, t_circular *stack_b)
{
	rotate(stack_a, 0);
	rotate(stack_b, 0);
	write(1, "rr\n", 3);
}
