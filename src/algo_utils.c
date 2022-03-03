/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:29:42 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/03 12:51:18 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Get the Longest Increasing Sequence
t_stack	*get_lis(void)
{
	t_lis_vars	vars;
	t_stack		*to_return;

	vars.current_len = 1;
	vars.max_len = 1;
	vars.total_count = 1;
	vars.res_index = 0;
	do_lis_loop(&vars);
	to_return = create_lis((*get_stack(A)), vars);
	return (to_return);
}

void	do_lis_loop(t_lis_vars *vars)
{
	t_stack		*current;

	current = (*get_stack(A));
	while (current->next)
	{
		if (current->content < (current->next)->content)
			vars->current_len++;
		else
		{
			if (vars->max_len < vars->current_len)
			{
				vars->max_len = vars->current_len;
				vars->res_index = vars->total_count - vars->current_len;
			}
			vars->current_len = 1;
		}
		vars->total_count++;
		current = current->next;
	}
	if (vars->max_len < vars->current_len)
	{
		vars->max_len = vars->current_len;
		vars->res_index = vars->total_count - vars->max_len;
	}
}

t_stack	*create_lis(t_stack *current, t_lis_vars vars)
{
	t_stack	*to_return;
	int		i;

	i = 0;
	to_return = NULL;
	while (current)
	{
		if (i == vars.res_index)
		{
			while (vars.max_len > 0)
			{
				lst_add_and_initialize(&to_return, current->content);
				current = current->next;
				vars.max_len--;
			}
			break ;
		}
		i++;
		current = current->next;
	}
	return (to_return);
}
