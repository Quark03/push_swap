/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quark <quark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:43:26 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/14 14:03:09 by quark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_values(void)
{
	t_stack	*stack_b;
	t_stack	**moves;
	int		len_b;
	int		i;

	stack_b = (*get_stack(B));
	len_b = lst_length(stack_b);
	moves = malloc(len_b * sizeof(t_stack));
	i = 0;
	while (i < len_b)
		moves[i++] = NULL;
	i = 0;
	while (stack_b->next && i < len_b)
	{
		moves_to_sort(&moves[i++], stack_b->content);
		stack_b = stack_b->next;
	}
	print_list(moves[0]);
	run_smaller_sequence(moves, len_b);
}

void	run_smaller_sequence(t_stack **moves, int len)
{
	int		i;
	int		k;
	int		temp;
	int		current;
	t_stack	*head;

	i = 0;
	temp = -1;
	current = -1;
	while (i < len)
	{
		current = lst_length(moves[i]);
		if (temp == -1 || current < temp)
		{
			temp = current;
			k = i;
		}
		i++;
	}
	head = *(moves + k);
	while (head)
	{
		exec_command(head->content);
		head = head->next;
	}
}
