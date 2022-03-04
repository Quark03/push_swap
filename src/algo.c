/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:27:03 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/04 16:59:32 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_sort(void)
{
	t_stack	*stack_a;
	t_stack	*lis;

	stack_a = (*get_stack(A));
	if (lst_length(stack_a) <= STACK_SAVE_SIZE)
		lst_sort_3();
	else
	{
		lis = find_lis((*get_stack(A)));
		if (lst_length(lis) <= 3)
			empty_a();
		else
			ft_putstr_fd("Using LIS", 1);
		lst_sort_large();
	}
}

void	lst_sort_3(void)
{
	t_stack	*node1;
	t_stack	*node2;
	t_stack	*node3;

	node1 = (*get_stack(A));
	node2 = node1->next;
	node3 = node2->next;
	if (!node2 && !node3)
		return ;
	if (!node3)
	{
		if (node1->content > node2->content)
			exec_command(3);
		return ;
	}
	if (is_sorted(node1, node2, node3) == 1)
		return ;
	else
		sort_small_stack(node1, node2, node3);
}

void	lst_sort_large(void)
{
	return ;
}
