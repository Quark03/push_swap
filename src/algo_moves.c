/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:49:22 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/16 14:21:58 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	moves_to_sort(t_stack **moves, int value)
{
	int	moves_c;

	moves_c = moves_to_top_b(value);
	while (moves_c-- > 0)
		lst_add_and_initialize(moves, 4);
	moves_c = find_spot_in_a((*get_stack(A)), value);
	while (moves_c-- > 0)
		lst_add_and_initialize(moves, 3);
	lst_add_and_initialize(moves, 9);
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
