/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 22:31:06 by nogerace          #+#    #+#             */
/*   Updated: 2025/07/04 22:59:35 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	pa(t_stack_node **a, t_stack_node **b, bool print)
{
	t_stack_node	*push_node;

	if (!*b)
		return ;
	push_node = *b;
	*b = push_node->next;
	if (*b)
		(*b)->prev = NULL;
	push_node->prev = NULL;
	if (!*a)
	{
		push_node->next = NULL;
		*a = push_node;
	}
	else
	{
		push_node->next = *a;
		(*a)->prev = push_node;
		*a = push_node;
	}
	if (!print)
		write(1, "pa\n", 3);
}

void	pb(t_stack_node **b, t_stack_node **a, bool print)
{
	t_stack_node	*push_node;

	if (!*a)
		return ;
	push_node = *a;
	*a = push_node->next;
	if (*a)
		(*a)->prev = NULL;
	push_node->prev = NULL;
	if (!*b)
	{
		push_node->next = NULL;
		*b = push_node;
	}
	else
	{
		push_node->next = *b;
		(*b)->prev = push_node;
		*b = push_node;
	}
	if (!print)
		write(1, "pb\n", 3);
}
