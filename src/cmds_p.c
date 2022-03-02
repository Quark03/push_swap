/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmds_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:38:46 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/02 11:18:35 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// a (push a): Take the first element at the
// top of b and put it at the top of a.
// Do nothing if b is empty.
void	pa(void)
{
	t_stack	*stack_b;
	t_stack	*temp;

	if ((*get_stack(B)) == NULL)
		return ;
	stack_b = (*get_stack(B));
	if ((*get_stack(A)) == NULL)
	{
		temp = lst_new(stack_b->content);
		(*get_stack(A)) = temp;
	}
	else
		lst_add_front(get_stack(A), stack_b->content);
	(*get_stack(B)) = stack_b->next;
	ft_putstr_fd("pa\n", 1);
}

// (push b): Take the first element at the
// top of a and put it at the top of b.
// Do nothing if a is empty.
void	pb(void)
{
	t_stack	*stack_a;
	t_stack	*temp;

	if ((*get_stack(A)) == NULL)
		return ;
	stack_a = (*get_stack(A));
	if ((*get_stack(B)) == NULL)
	{
		temp = lst_new(stack_a->content);
		(*get_stack(B)) = temp;
	}
	else
		lst_add_front(get_stack(B), stack_a->content);
	(*get_stack(A)) = stack_a->next;
	ft_putstr_fd("pb\n", 1);
}
