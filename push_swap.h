/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:34:53 by acinca-f          #+#    #+#             */
/*   Updated: 2022/02/22 16:37:23 by acinca-f         ###   ########.fr       */
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

// Functions
t_stack	*lst_new(int content);
void	lst_add_back(t_stack *head, int nbr);
void	lst_add_front(t_stack **head, int nbr);
void	print_stack(t_stack *head);
t_stack	**get_stack(t_type stack);
int		lst_length(t_stack *head);

// Commands
void	sa(int print);
void	sb(int print);
void	ss(void);
void	pa(void);
void	pb(void);

#endif
