/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 22:35:13 by nogerace          #+#    #+#             */
/*   Updated: 2025/07/04 23:12:35 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sa(t_stack_node **stack_a, bool print)
{
	t_stack_node	*first;
	t_stack_node	*second;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	first = *stack_a;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->next = first;
	second->prev = NULL;
	first->prev = second;
	*stack_a = second;
	if (!print)
		write(1, "sa\n", 3);
}

void	sb(t_stack_node **stack_b, bool print)
{
	t_stack_node	*first;
	t_stack_node	*second;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	first = *stack_b;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->next = first;
	second->prev = NULL;
	first->prev = second;
	*stack_b = second;
	if (!print)
		write(1, "sb\n", 3);
}

void	ss(t_stack_node **stack_a, t_stack_node **stack_b, bool print)
{
	sa(stack_a, true);
	sb(stack_b, true);
	if (!print)
		write(1, "ss\n", 3);
}
