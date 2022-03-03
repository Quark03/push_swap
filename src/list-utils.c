/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list-utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:30:20 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/03 12:22:51 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*lst_new(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	lst_add_back(t_stack *head, int nbr)
{
	t_stack	*temp;

	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = lst_new(nbr);
}

void	lst_add_and_initialize(t_stack **list, int nbr)
{
	if (*list)
		lst_add_back(*list, nbr);
	else if (list && !(*(list)))
		*list = lst_new(nbr);
}

void	lst_add_front(t_stack **head, int nbr)
{
	t_stack	*new;

	new = lst_new(nbr);
	new->next = *head;
	*head = new;
}

int	lst_length(t_stack *head)
{
	t_stack	*temp;
	int		sum;

	temp = head;
	sum = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		sum++;
	}
	return (sum);
}
