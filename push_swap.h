#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct	s_node_s
{
	char		order;
	int			content;
	s_node_s	*next;
} t_node_s;

 typedef struct s_circular
{
	s_node_s	*first;
	s_node_s	*last;
} t_circular;

//Funciones para la entrada de datos
int			ft_atoi_c(char *cadena);

//Operaciones de la lista circular
void		add_first(t_circular list, t_node_s element);
void		add_last(t_circular list, t_node_s element);
void		clear(t_circular list);

//Operaciones disponibles para ordenar.
void		swap(t_circular stack, char c);
void		swap_s(t_circular stack_a, t_circular stack_b);
void		push(t_circular stack, char c);
void		rotate(t_circular list, char c);
void		rotate_r(t_circular stack_a, t_circular stack_b);
void		reverse_rotate(t_circular stack, char c);
void		reverse_rotate_r(t_circular stack_a, t_circular stack_b);

#endif
