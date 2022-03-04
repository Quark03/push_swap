/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:08:06 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/04 16:55:51 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
	ALGORITHM TO SORT 3 ELEMENTS
*/

// Are 3 elements sorted?
int	is_sorted(t_stack *node1, t_stack *node2, t_stack *node3)
{
	if (node1->content < node2->content && node2->content < node3->content)
		return (1);
	return (0);
}

void	sort_small_stack(t_stack *node1, t_stack *node2, t_stack *node3)
{
	if (node1->content > node2->content)
		exec_command(0);
	if (node2->content > node3->content)
	{
		exec_command(3);
		exec_command(0);
	}
	if (node1->content > node2->content)
		exec_command(0);
	return ;
}
