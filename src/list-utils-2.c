/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list-utils-2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:50:14 by acinca-f          #+#    #+#             */
/*   Updated: 2022/02/22 17:14:11 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// First element becomes the last one
void	lst_shift_up(t_stack *head)
{
	t_stack	*temp;

	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = head;
	head = head->next;
	head->next = NULL;
}

// The last element becomes the first one
void	lst_shift_down(t_stack *head)
{
	(void)head;
}
