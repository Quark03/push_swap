/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quark <quark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:43:26 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/15 10:07:12 by quark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_values(void)
{
	t_stack	*stack_b;
	t_stack	**moves;
	int		len_b;
	int		i;
	int		min;

	stack_b = (*get_stack(B));
	len_b = lst_length(stack_b);
	moves = malloc(len_b * sizeof(t_stack));
	if (!moves)
		return ;
	i = 0;
	while (stack_b->next && i < len_b)
	{
		printf("Content: %d | Index: %d\n", stack_b->content, i);
		moves_to_sort(&moves[i++], stack_b->content);
		stack_b = stack_b->next;
	}
	print_list(moves[1]);
	ft_putstr_fd("\n", 1);
	min = find_smaller_sequence(moves, len_b);
	run_smaller_sequence(*(moves + min));
	free(moves);
}

int	find_smaller_sequence(t_stack **moves, int len)
{
	int	min;
	int	temp;
	int	i;
	int	k;

	temp = 0;
	min = lst_length(moves[0]);
	i = 1;
	k = 0;
	while (i < len)
	{
		temp = lst_length(moves[i]);
		if (temp < min)
		{
			min = temp;
			k = i;
		}
		i++;
	}
	return (k);
}

void	run_smaller_sequence(t_stack *head)
{
	while (head->next)
	{
		printf("Command: %d", head->content);
		exec_command(head->content);
		head = head->next;
	}
}
