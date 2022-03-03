/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:00:03 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/03 12:32:02 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*array_to_list(int *array)
{
	int		i;
	t_stack	*list;

	i = 0;
	while (array[i])
	{
		if (i == 1)
			list = lst_new(array[i]);
		else
			lst_add_back(list, array[i]);
		i++;
	}
	return (list);
}

int	*list_to_array(t_stack *head)
{
	int		len;
	int		i;
	int		*array;
	t_stack	*temp;

	i = 0;
	len = lst_length(head);
	temp = head;
	array = malloc(sizeof(int) * len);
	if (!array)
		return (NULL);
	while (temp != NULL)
	{
		array[i] = temp->content;
		temp = temp->next;
		i++;
	}
	return (array);
}

int	array_length(int *array)
{
	int	len;

	len = 0;
	while (array[len])
		len++;
	return (len);
}

void	print_array(int *array)
{
	int	i;

	i = 0;
	while (array[i])
		ft_putnbr_fd(array[i++], 1);
}
