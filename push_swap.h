/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:41:08 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/07/25 20:53:15 by jpozuelo         ###   ########.fr       */
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
	int					fixed;
	struct s_node_s		*next;
	struct s_node_s		*previous;
} t_node_s;

 typedef struct s_circular
{
	t_node_s		*first;
	t_node_s		*last;
	int				clean;
	unsigned int	minum;
	unsigned int	maxim;
} t_circular;

typedef struct s_monitor
{
	t_circular		stack_a;
	t_circular		stack_b;
	int				error;
	int				*nlist;
	unsigned int	*list;
	unsigned int	amount;
	unsigned int	size;
} t_monitor;

//Utils
int			isNumber(char c);
void		p_atoi(char *str, t_monitor *mon);
void		n_atoi(char *str, t_monitor *mon);
void		resize(t_monitor *mon);
void		fit(t_monitor *mon);

//Funciones para la entrada de datos
void		init(t_monitor *mon, int argc, char **argv);
void		parser(t_monitor *mon, char *line);

//Funciones para limpiar

//Operaciones para implementar la lista de nodos bidireccional y circular
void		add_first(t_circular *list, t_node_s *element);
//void		add_last(t_circular *list, t_node_s *element);
void		clear(t_circular *list);
void		error_msg();
void		connection(t_node_s *node, t_node_s *next);
t_node_s	*pop(t_circular *list);
t_node_s	*create_node(int content);
t_node_s	*delete_node();

//Operaciones disponibles para ordenar.
void		swap(t_circular *stack, char c);
void		swap_s(t_circular *stack_1, t_circular *stack_2);
void		push(t_circular *stack_a, t_circular *stack_b, char c);
void		rotate(t_circular *stack, char c);
void		rotate_r(t_circular *stack_a, t_circular *stack_b);
void		reverse_rotate(t_circular *stack, char c);
void		reverse_rotate_r(t_circular *stack_a, t_circular *stack_b);

#endif
