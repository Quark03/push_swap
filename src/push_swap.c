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

t_stack *get_stack(t_type stack)
{
	static t_stack *stack_a;
	static t_stack *stack_b;

	if (stack == A)
		return (stack_a);
	else if (stack == B)
		return (stack_b);
	return (stack_a);
}

void print_stack(t_stack *list)
{
	t_stack *temp;

	temp = list;
	if (temp)
		while (temp->next)
		{
			ft_putnbr_fd(temp->content, 1);
			temp = temp->next;
		}
}

int main(int ac, char **av)
{
	t_stack *stack_a;
	int i;
	int nbr;

	i = 1;
	stack_a = get_stack(A);
	while (i < ac)
	{
		nbr = ft_atoi(av[i]);
		if (i == 1)
			initialize_list(stack_a, nbr);
		/*else
			add_node_to_end(stack_a, ft_atoi(av[i]));*/
		printf("[%d / %d] Str => %d\n", i, ac, nbr);
		i++;
	}
	print_stack(stack_a);
}
