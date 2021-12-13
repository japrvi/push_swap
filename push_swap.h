/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:41:08 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/12/13 16:15:16 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_node_s
{
	char				order;
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
int			ft_check_format(char *cadena);
int			ft_atoi_c(char *cadena, int *i);

//Operaciones para implementar la lista de nodos bidireccional y circular
void		add_first(t_circular *list, t_node_s *element);
//void		add_last(t_circular *list, t_node_s *element);
void		clear(t_circular *list);
t_node_s	*pop(t_circular *list);
t_node_s	create_node(int content, char , char c);

//Operaciones disponibles para ordenar.
void		swap(t_circular *stack, char c);
void		swap_s(t_circular *stack_1, t_circular *stack_2);
void		push(t_circular *stack_a, t_circular *stack_b, char c);
void		rotate(t_circular *stack, char c);
void		rotate_r(t_circular *stack_a, t_circular *stack_b);
void		reverse_rotate(t_circular *stack, char c);
void		reverse_rotate_r(t_circular *stack_a, t_circular *stack_b);

//Funciones que modifican el atributo order
void		error_msg(char error);
char		check_order_element(t_node_s *node, char c);
char		check_order_list(t_circular *stack, char c);
void		check_no_repeat();
//Funciones para implementar el checker

#endif
