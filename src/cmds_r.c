/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmds_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:40:51 by acinca-f          #+#    #+#             */
/*   Updated: 2022/02/22 17:13:07 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(void)
{
	lst_shift_up((*get_stack(A)));
	ft_putstr_fd("ra\n", 1);
}

void	rb(void)
{
	write(1, "rb", 2);
}

void	rr(void)
{
	write(1, "rr", 2);
}
