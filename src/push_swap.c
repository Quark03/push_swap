/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:30:01 by acinca-f          #+#    #+#             */
/*   Updated: 2022/03/02 09:57:31 by acinca-f         ###   ########.fr       */
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

void	print_stack(t_type stack)
{
	t_stack	*head;
	t_stack	*temp;

	ft_putstr_fd("Stack", 1);
	if (stack == A)
		ft_putstr_fd(" A: ", 1);
	else
		ft_putstr_fd(" B: ", 1);
	head = (*get_stack(stack));
	temp = head;
	if (!head)
	{
		ft_putstr_fd("(EMPTY)\n", 1);
		return ;
	}
	while (temp != NULL)
	{
		ft_putnbr_fd(temp->content, 1);
		ft_putstr_fd(" ", 1);
		temp = temp->next;
	}
	ft_putstr_fd("\n", 1);
}

int	main(int ac, char **av)
{
	int		i;
	t_stack	*temp;

	i = 1;
	(*get_stack(B)) = NULL;
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
	ra(1);
	rra(1);
	print_stack(A);
	print_stack(B);
}
