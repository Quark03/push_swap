/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:30:01 by acinca-f          #+#    #+#             */
/*   Updated: 2022/01/26 10:51:45 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_print(int stack[], int len)
{
	int i = 0;
	while (i < len)
	{
		ft_putnbr_fd(stack[i], 0);
		i++;
	}
}

int main(int ac, char **av)
{
	int stackA[ac - 1];
	int stackB[ac - 1];
	int i = 1;
	int k = 0;

	(void) stackB;

	while (i < ac)
	{
		printf("Str => %d\n", ft_atoi(av[i]));
		stackA[k] = ft_atoi(av[i]);
		i++;
		k++;
	}
	stack_print(stackA, k);
}
