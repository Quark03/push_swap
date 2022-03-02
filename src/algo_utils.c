/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:29:42 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/02 12:48:34 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_max(t_list *head)
{
	t_list	*temp;
	int		max;

	temp = head;
	max = temp->content;
	while (temp)
	{
		if (temp->content > max)
			max = temp->content;
		temp = temp->next;
	}
}

int	digits(int nbr)
{
	int	i;

	i = 1;
	if (nbr < 10)
		return (1);
	while (nbr > power(10, i))
		i++;
	return (i);
}

int	power(int nbr, int exp)
{
	int	power;

	power = 1;
	while (exp > 0)
	{
		power *= nbr;
		exp--;
	}
}

void	test_sort(void)
{
	int	length;
	int	max;
	int	d;

	length = lst_length((*get_stack(A)));
	max = get_max((*get_stack(A)));
	d = digits(max);
}
