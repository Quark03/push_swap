/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quark <quark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:27:03 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/14 13:59:46 by quark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_sort(void)
{
	if (is_sorted((*get_stack(A))))
		return ;
	else if (lst_length((*get_stack(A))) <= 3)
		lst_sort_small();
	else
		lst_sort_large();
}

void	lst_sort_small(void)
{
	if (lst_length((*get_stack(A))) < 3)
	{
		if ((*get_stack(A))->content > (*get_stack(A))->next->content)
			exec_command(0);
		return ;
	}
	if ((*get_stack(A))->content > (*get_stack(A))->next->content)
	{
		exec_command(0);
	}
	if ((*get_stack(A))->next->content > (*get_stack(A))->next->next->content)
	{
		exec_command(3);
		exec_command(0);
		exec_command(6);
		if ((*get_stack(A))->content > (*get_stack(A))->next->content)
		{
			exec_command(0);
		}
	}
}

void	lst_sort_large(void)
{
	empty_a();
	lst_sort_small();
	while (lst_length((*get_stack(B))) > 0)
	{
		printf("Length B: %d\n", lst_length((*get_stack(B))));
		sort_values();
	}
}
