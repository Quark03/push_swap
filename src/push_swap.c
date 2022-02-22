/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:30:01 by acinca-f          #+#    #+#             */
/*   Updated: 2022/02/22 15:29:39 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	**get_stack(t_type stack)
{
	static t_stack	*stack_a;
	static t_stack	*stack_b;

	if (stack == A)
		return (&stack_a);
	else if (stack == B)
		return (&stack_b);
	return (&stack_a);
}

void	print_stack(t_stack *head)
{
	t_stack	*temp;

	temp = head;
	while (temp != NULL)
	{
		ft_putnbr_fd(temp->content, 1);
		temp = temp->next;
	}
}

int	main(int ac, char **av)
{
	int		i;
	t_stack	*temp;

	i = 1;
	while (i < ac)
	{
		if (i == 1)
		{
			temp = lst_new(ft_atoi(av[i]));
			(*get_stack(A)) = temp;
		}
		else
		{
			lst_add_back((*get_stack(A)), ft_atoi(av[i]));
		}
		i++;
	}
	print_stack((*get_stack(A)));
}
