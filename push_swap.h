/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:34:53 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/03 12:51:14 by acinca-f         ###   ########.fr       */
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
	AB
}	t_type;

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}	t_stack;

typedef struct s_lis_vars
{
	int	current_len;
	int	max_len;
	int	total_count;
	int	res_index;
}	t_lis_vars;

// Functions
t_stack	*lst_new(int content);
void	lst_add_back(t_stack *head, int nbr);
void	lst_add_front(t_stack **head, int nbr);
void	lst_add_and_initialize(t_stack **list, int nbr);
void	print_stack(t_type stack);
void	print_list(t_stack *head);
t_stack	**get_stack(t_type stack);
int		lst_length(t_stack *head);

// Algorithm Utils
t_stack	*get_lis(void);
void	do_lis_loop(t_lis_vars *vars);
t_stack	*create_lis(t_stack *current, t_lis_vars vars);

// Algorithm
void	lst_sort(void);

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

#endif
