/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:41:08 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/12/06 16:27:16 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>

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
char			*ft_strdup(char *cadena);

//Funciones para la entrada de datos
int				ft_check_format(char *cadena);
int				ft_atoi_c(char *cadena, int *i);

//Operaciones de la lista circular
void			add_first(t_circular list, t_node_s element);
void			add_last(t_circular list, t_node_s element);
void			clear(t_circular list);

//Operaciones disponibles para ordenar.
void			swap(t_circular stack, char c);
void			swap_s(t_circular stack_a, t_circular stack_b);
void			push(t_circular stack, char c);
void			rotate(t_circular list, char c);
void			rotate_r(t_circular stack_a, t_circular stack_b);
void			reverse_rotate(t_circular stack, char c);
void			reverse_rotate_r(t_circular stack_a, t_circular stack_b);

//Funciones para implementar el checker

#endif
