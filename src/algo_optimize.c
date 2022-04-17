/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_optimize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:41:24 by acinca-f          #+#    #+#             */
/*   Updated: 2022/04/06 12:01:31 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

t_counts	count_moves(t_stack *list)
{
	t_stack		*optimized;
	t_counts	counts;

	counts.countra = 0;
	counts.countrb = 0;
	counts.countrra = 0;
	counts.countrrb = 0;
	while (list)
	{
		if (list->content == 3)
			counts.countra++;
		else if (list->content == 4)
			counts.countrb++;
		else if (list->content == 6)
			counts.countrra++;
		else if (list->content == 7)
			counts.countrrb++;
	}
	return (counts);
}

t_stack	**optimize(t_stack *list)
{
	t_counts	counts;
	t_stack		*steps;

	counts = count_moves(list);
	if (counts.countra > 0 && counts.countrb > 0)
	{
		while (counts.countra > 0 && counts.countrb > 0)
		{
			lst_add_and_initialize(&steps, 5);
			counts.countra--;
			counts.countrb--;
		}
	}
	else
	{
		while (counts.countra-- != 0)
			lst_add_and_initialize(&steps, 3);
		while (counts.countrb-- != 0)
			lst_add_and_initialize(&steps, 4);
	}
	if (counts.countrra > 0 && counts.countrrb > 0)
	{
		while (counts.countrra > 0 && counts.countrrb > 0)
		{
			lst_add_and_initialize(&steps, 8);
			counts.countrra--;
			counts.countrrb--;
		}
	}
	else
	{
		while (counts.countrra-- != 0)
			lst_add_and_initialize(&steps, 6);
		while (counts.countrrb-- != 0)
			lst_add_and_initialize(&steps, 7);
	}
	lst_add_and_initialize(&steps, 9);
	return (&steps);
}
