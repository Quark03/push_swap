/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmds_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:41:45 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/02 10:07:35 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(int print)
{
	t_stack	*temp;
	t_stack	*save;
	int		len;

	temp = (*get_stack(A));
	if (temp == NULL)
		return ;
	len = 0;
	while (temp->next != NULL && len < lst_length((*get_stack(A))) - 2)
	{
		temp = temp->next;
		len++;
	}
	save = temp->next;
	temp->next = NULL;
	save->next = (*get_stack(A));
	(*get_stack(A)) = save;
	if (print)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(int print)
{
	t_stack	*temp;
	t_stack	*save;
	int		len;

	temp = (*get_stack(B));
	if (temp == NULL)
		return ;
	len = 0;
	while (temp->next != NULL && len < lst_length((*get_stack(B))) - 2)
	{
		temp = temp->next;
		len++;
	}
	save = temp->next;
	temp->next = NULL;
	save->next = (*get_stack(B));
	(*get_stack(B)) = save;
	if (print)
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(void)
{
	rra(0);
	rrb(0);
	ft_putstr_fd("rrr\n", 1);
}
