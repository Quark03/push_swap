/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:48:27 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/04 16:50:11 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*find_lis(t_stack *head)
{
	t_stack	*to_return;
	int		current;

	to_return = NULL;
	while (head->next)
	{
		current = head->content;
		if (!to_return || current > lst_get_last_val(to_return))
			lst_add_and_initialize(&to_return, current);
		else
		{
			while (lst_get_last_val(to_return) > current)
				lst_pop_back(to_return);
			lst_add_and_initialize(&to_return, current);
		}
		head = head->next;
	}
	return (to_return);
}
