/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:40:46 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/04 13:45:57 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 *	0 ->  SA
 *	1 ->  SB
 *	2 ->  SS
 *	3 ->  RA
 *	4 ->  RB
 *	5 ->  RR
 *	6 ->  RRA
 *	7 ->  RRB
 *	8 ->  RRR
 *	9 ->  PA
 *	10 -> PB
 */
void	exec_command(int c)
{
	if (c == 0)
		sa(1);
	else if (c == 1)
		sb(1);
	else if (c == 2)
		ss();
	else if (c == 3)
		ra(1);
	else if (c == 4)
		rb(1);
	else if (c == 5)
		rr();
	else if (c == 6)
		rra(1);
	else if (c == 7)
		rrb(1);
	else if (c == 8)
		rrr();
	else if (c == 9)
		pa();
	else if (c == 10)
		pb();
}

/**
 * Leaves A with just 3 elements
 */
void	empty_a(void)
{
	int	len_a;

	len_a = lst_length((*get_stack(A)));
	if (len_a > 3)
	{
		return ;
	}
	return ;
}
