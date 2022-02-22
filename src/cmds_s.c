/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmds_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:23:07 by acinca-f          #+#    #+#             */
/*   Updated: 2022/02/22 16:10:52 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(int print)
{
	t_stack	*node_1;
	t_stack	*node_2;
	t_stack	*node_3;

	if (lst_length((*get_stack(A))) < 2)
		return ;
	node_1 = (*get_stack(A));
	node_2 = node_1->next;
	node_3 = node_2->next;
	node_2->next = node_1;
	node_1->next = node_3;
	(*get_stack(A)) = node_2;
	if (print)
		ft_putstr_fd("sa\n", 1);
}

void	sb(int print)
{
	t_stack	*node_1;
	t_stack	*node_2;
	t_stack	*node_3;

	if (lst_length((*get_stack(B))) < 2)
		return ;
	node_1 = (*get_stack(B));
	node_2 = node_1->next;
	node_3 = node_2->next;
	node_2->next = node_1;
	node_1->next = node_3;
	(*get_stack(B)) = node_2;
	if (print)
		ft_putstr_fd("sb\n", 1);
}

void	ss(void)
{
	sa(0);
	sb(0);
	ft_putstr_fd("ss\n", 1);
}
