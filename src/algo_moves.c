/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quark <quark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:49:22 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/18 11:41:50 by quark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	moves_to_sort(t_stack **moves, int value)
{
	int	moves_c;
	int	len;
	int	temp;

	len = lst_length((*get_stack(B)));
	moves_c = moves_to_top_b(value);
	if ((moves_c + 1) - (len / 2) > 0)
	{
		temp = len - (moves_c + 1);
		while (temp-- > 0)
			lst_add_and_initialize(moves, 7);
	}
	else
	{
		temp = moves_c - 1;
		while (temp++ < 0)
			lst_add_and_initialize(moves, 4);
	}
	moves_c = find_spot_in_a((*get_stack(A)), value);
	while (moves_c-- > 0)
		lst_add_and_initialize(moves, 3);
	lst_add_and_initialize(moves, 9);
}

int	moves_to_top_b(int number)
{
	int	pos;

	pos = get_index_by_value((*get_stack(B)), number);
	return (pos);
}

int	find_spot_in_a(t_stack *head, int number)
{
	t_stack	*temp;
	int		moves;

	moves = 0;
	temp = head;
	while (temp)
	{
		if (temp->content < number)
			moves++;
		temp = temp->next;
	}
	return (moves);
}
