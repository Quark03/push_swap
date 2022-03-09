/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:49:22 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/09 15:26:35 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	moves_to_sort(int number)
{
	int	moves;

	moves = 1;
	moves += moves_to_top_b(number);
	moves += find_spot_in_a((*get_stack(A)), number);
	return (moves);
}

int	moves_to_top_b(int number)
{
	int	pos;
	int	size;

	size = lst_length((*get_stack(B)));
	pos = get_index_by_value((*get_stack(B)), number);
	if (pos + 1 <= size / 2)
		return (pos + 1);
	else
		return (size - (pos + 1));
}

int	find_spot_in_a(t_stack *head, int number)
{
	t_stack	*temp;
	int		moves;

	moves = 0;
	temp = head;
	while (temp->next)
	{
		if (temp->content < number)
			moves++;
		temp = temp->next;
	}
	return (moves);
}
