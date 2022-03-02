/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmds_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:40:51 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/02 09:52:41 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(int print)
{
	t_stack	*head;
	t_stack	*temp;

	head = (*get_stack(A));
	temp = head;
	if (temp == NULL)
		return ;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = head;
	(*get_stack(A)) = head->next;
	temp = temp->next;
	temp->next = NULL;
	if (print)
		ft_putstr_fd("ra\n", 1);
}

void	rb(int print)
{
	t_stack	*head;
	t_stack	*temp;

	head = (*get_stack(B));
	temp = head;
	if (temp == NULL)
		return ;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = head;
	(*get_stack(B)) = head->next;
	temp = temp->next;
	temp->next = NULL;
	if (print)
		ft_putstr_fd("rb\n", 1);
}

void	rr(void)
{
	ra(0);
	rb(0);
	ft_putstr_fd("rr\n", 1);
}
