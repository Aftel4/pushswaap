/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 22:17:40 by nogerace          #+#    #+#             */
/*   Updated: 2025/07/08 18:50:32 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	bool			split_used;

	a = NULL;
	b = NULL;
	split_used = false;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (argc == 2)
	{
		argv = split(argv[1], ' ');
		split_used = true;
	}
	if (!init_stack_a(&a, argv + 1))
		return (free_and_exit(argv, split_used));
	if (!stack_sorted(a))
		sort_all(&a, &b);
	free_stack(&a);
	if (split_used)
		free_argv(argv);
	return (0);
}

int	free_and_exit(char **argv, bool split_used)
{
	if (split_used)
		free_argv(argv);
	ft_printf("Error\n");
	return (1);
}

void	free_argv(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

void	sort_all(t_stack_node **a, t_stack_node **b)
{
	int	len;

	len = stack_len(*a);
	if (len == 2)
		sa(a, false);
	else if (len == 3)
		sort_three(a);
	else
		sort_stacks(a, b);
}
