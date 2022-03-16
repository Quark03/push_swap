/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:43:26 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/16 16:57:29 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_values(void)
{
	t_stack	*stack_b;
	t_stack	**moves;
	int		len_b;
	int		i;
	int		smaller;

	stack_b = (*get_stack(B));
	len_b = lst_length(stack_b);
	moves = malloc(len_b * sizeof(t_stack));
	if (!moves)
		return ;
	i = 0;
	while (stack_b && i < len_b)
	{
		moves_to_sort(&moves[i], stack_b->content);
		stack_b = stack_b->next;
		i++;
	}
	smaller = find_smaller_sequence(moves, len_b);
	run_smaller_sequence(moves[smaller]);
	place_min_top(*(get_stack(A)));
}

int	find_smaller_sequence(t_stack **moves, int len)
{
	int	current_index;
	int	current_len;
	int	min_index;
	int	min_len;

	current_index = 0;
	min_len = INT_MAX;
	while (current_index < len)
	{
		current_len = lst_length(moves[current_index]);
		if (current_len < min_len)
		{
			min_len = current_len;
			min_index = current_index;
		}
		current_index++;
	}
	return (min_index);
}

void	run_smaller_sequence(t_stack *head)
{
	while (head)
	{
		exec_command(head->content);
		head = head->next;
	}
}

void	place_min_top(t_stack *head)
{
	int		min;
	int		len;
	int		i;

	min = INT_MAX;
	while (head)
	{
		if (min > head->content)
			min = head->content;
		head = head->next;
	}
	min = get_index_by_value(*(get_stack(A)), min);
	len = lst_length(*(get_stack(A)));
	i = 0;
	if (min <= len / 2)
	{
		while (i++ < (min + 1))
			exec_command(3);
	}
	else
	{
		while (i++ < (len - (min + 1)))
			exec_command(6);
	}
}
