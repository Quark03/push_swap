/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quark <quark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:34:53 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/14 13:56:58 by quark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

typedef enum e_type
{
	A,
	B,
}	t_type;

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}	t_stack;

// List Methods
t_stack	**get_stack(t_type stack);
t_stack	*lst_new(int content);
void	lst_add_back(t_stack *head, int nbr);
void	lst_add_front(t_stack **head, int nbr);
void	lst_add_and_initialize(t_stack **list, int nbr);
void	print_stack(t_type stack);
void	print_list(t_stack *head);
int		lst_length(t_stack *head);
void	lst_pop_back(t_stack *head);
int		lst_get_last_val(t_stack *head);
int		get_value_by_index(t_stack *head, int index);
int		get_index_by_value(t_stack *head, int value);

// Commands
void	sa(int print);
void	sb(int print);
void	ss(void);
void	pa(void);
void	pb(void);
void	ra(int print);
void	rb(int print);
void	rr(void);
void	rra(int print);
void	rrb(int print);
void	rrr(void);

// Algorithm
void	stack_sort(void);
void	lst_sort_small(void);
void	lst_sort_large(void);
void	exec_command(int c);
int		is_sorted(t_stack *head);
void	empty_a(void);
void	sort_values(void);
void	run_smaller_sequence(t_stack **moves, int len);

//Algo Moves
void	moves_to_sort(t_stack **moves, int value);
int		moves_to_top_b(int number);
int		find_spot_in_a(t_stack *head, int number);

#endif
