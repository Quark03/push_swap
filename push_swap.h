/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f <acinca-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:34:53 by acinca-f          #+#    #+#             */
/*   Updated: 2022/02/15 16:47:57 by acinca-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

typedef enum e_type
{
	A,
	B,
	AB
} t_type;

typedef struct s_stack
{
	int content;
	struct s_stack *next;
} t_stack;

void initialize_list(t_stack *list, int number);
t_stack *create_node(int number);
void add_node_to_end(t_stack *first, int number);

#endif
