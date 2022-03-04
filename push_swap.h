/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:34:53 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/04 16:57:37 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# ifndef STACK_SAVE_SIZE
#  define STACK_SAVE_SIZE 3
# endif

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

typedef enum e_type
{
	A,
	B,
	AB
}	t_type;

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}	t_stack;

// List Methods
t_stack	*lst_new(int content);
void	lst_add_back(t_stack *head, int nbr);
void	lst_add_front(t_stack **head, int nbr);
void	lst_add_and_initialize(t_stack **list, int nbr);
void	print_stack(t_type stack);
void	print_list(t_stack *head);
t_stack	**get_stack(t_type stack);
int		lst_length(t_stack *head);
int		get_stack_by_index(t_stack *head, int index);
void	lst_pop_back(t_stack *head);
int		lst_get_last_val(t_stack *head);

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
void	lst_sort_large(void);
void	lst_sort_3(void);
void	exec_command(int c);
int		is_sorted(t_stack *node1, t_stack *node2, t_stack *node3);
void	sort_small_stack(t_stack *node1, t_stack *node2, t_stack *node3);
t_stack	*find_lis(t_stack *head);
void	empty_a(void);

#endif
