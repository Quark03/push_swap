/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:27:03 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/02 12:38:17 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	lst_sort(void)
{
	int	max;
	int	exp;

	max = get_max((*get_stack(A)));
	exp = 1;
	while (max / exp > 0)
	{
		count_sort(exp);
		exp *= 10;
	}
}
