/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:30:01 by acinca-f          #+#    #+#             */
/*   Updated: 2022/02/15 16:55:00 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	**get_stack(t_type stack)
{
	static t_stack	**stack_a;
	static t_stack	**stack_b;

	if (stack == A)
		return (stack_a);
	else if (stack == B)
		return (stack_b);
	return (stack_a);
}

void	fill_stack(int pos, int nbr)
{
	t_stack	**lst;
	t_stack	*temp;

	if (pos == 1)
	{
		temp = lst_new(nbr);
		lst = get_stack(A);
		lst = temp;
	}
	else
	{
		ft_lstadd_back(get_stack(A), lst_new(nbr));
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		printf("Str => %s\n", av[i]);
		fill_stack(i, ft_atoi(av[i]));
		i++;
	}
}
