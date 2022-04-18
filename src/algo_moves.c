/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:49:22 by acinca-f          #+#    #+#             */
/*   Updated: 2022/04/18 13:00:17 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	moves_to_sort(t_stack **moves, int value)
{
	int	moves_count;
	int	pos;
	int	len;

	len = lst_length((*get_stack(B)));
	pos = moves_to_top_b(value);
	if (pos - (len - 1) < 0)
	{
		moves_count = pos - (len - 1);
		while (moves_count++ < 0)
			lst_add_and_initialize(moves, 7);
	}
	else if (pos - (len - 1) >= 0)
	{
		moves_count = pos - (len - 1);
		while (moves_count-- > 0)
			lst_add_and_initialize(moves, 4);
	}
	pos = find_spot_in_a(value);
	len = lst_length((*get_stack(A)));
	if (pos - (len - 1) < 0)
	{
		moves_count = pos - (len - 1);
		while (moves_count++ < 0)
			lst_add_and_initialize(moves, 6);
	}
	else if (pos - (len - 1) >= 0)
	{
		moves_count = pos - (len - 1);
		while (moves_count-- > 0)
			lst_add_and_initialize(moves, 3);
	}
	lst_add_and_initialize(moves, 9);
}

// Moves needed to place the number on top of stack B
int	moves_to_top_b(int number)
{
	int	pos;

	pos = get_index_by_value((*get_stack(B)), number);
	return (pos);
}

// Find where to place the number in stack A
int	find_spot_in_a(int number)
{
	t_stack	*head;
	int		moves;

	moves = 0;
	head = *(get_stack(A));
	while (head)
	{
		if (head->content < number)
			moves++;
		head = head->next;
	}
	return (moves);
}
