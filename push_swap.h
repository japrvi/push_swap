/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:41:08 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/04/27 20:12:13 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct	s_node_s
{
	int					content;
	struct s_node_s		*next;
	struct s_node_s		*previous;
} t_node_s;

 typedef struct s_circular
{
	t_node_s	*first;
	t_node_s	*last;
} t_circular;

//Utils
char		*ft_strdup(char *cadena);

//Funciones para la entrada de datos

//Operaciones para implementar la lista de nodos bidireccional y circular
void		add_first(t_circular *list, t_node_s *element);
//void		add_last(t_circular *list, t_node_s *element);
void		clear(t_circular *list);
void		connection(t_node_s *node, t_node_s *next);
t_node_s	*pop(t_circular *list);
t_node_s	*create_node(int content);

//Operaciones disponibles para ordenar.
void		swap(t_circular *stack, char c);
void		swap_s(t_circular *stack_1, t_circular *stack_2);
void		push(t_circular *stack_a, t_circular *stack_b, char c);
void		rotate(t_circular *stack, char c);
void		rotate_r(t_circular *stack_a, t_circular *stack_b);
void		reverse_rotate(t_circular *stack, char c);
void		reverse_rotate_r(t_circular *stack_a, t_circular *stack_b);

#endif
