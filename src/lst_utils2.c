/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:05:01 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/09 15:10:53 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_value_by_index(t_stack *head, int index)
{
	int	i;
	int	list_length;

	list_length = lst_length(head);
	if (index > list_length)
		return (0);
	i = 0;
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head->content);
}

int	get_index_by_value(t_stack *head, int value)
{
	int	i;

	i = -1;
	while (head->next)
	{
		if (head->content == value)
			return (i);
		i++;
		head = head->next;
	}
	return (i);
}

void	lst_pop_back(t_stack *head)
{
	t_stack	*temp;

	if (!head)
		return ;
	if (head->next == NULL)
	{
		free(head);
		return ;
	}
	temp = head;
	while ((temp->next)->next != NULL)
		temp = temp->next;
	free(temp->next);
	temp->next = NULL;
}

int	lst_get_last_val(t_stack *head)
{
	while (head->next)
		head = head->next;
	return (head->content);
}
