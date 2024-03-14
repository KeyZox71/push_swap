/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:29:26 by adjoly            #+#    #+#             */
/*   Updated: 2024/03/12 15:37:38 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	send_to_stack_b(t_stack **stack_a, t_stack **stack_b)
{
	size_t	stack_size;
	int		q_one;
	int		median;

	while (*stack_a)
	{
		median = find_median(stack_a);
		q_one = find_q_one(stack_a);
		stack_size = ft_stacksize(*stack_a);
		while (stack_size != 0)
		{
			if ((*stack_a)->nb <= median)
			{
				ft_push_b(stack_a, stack_b);
				if (*stack_b && (*stack_b)->nb <= q_one)
					ft_rotatestack_b(stack_b);
			}
			else
				ft_rotatestack_a(stack_a);
			stack_size--;
		}
	}
	if (*stack_a)
		ft_push_b(stack_a, stack_b);
}

void	ft_algo(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stacksize(*stack_a) == 2)
	{
		ft_swap_a(*stack_a);
		return ;
	}
	if (ft_stacksize(*stack_a) == 3)
	{
		sort_three(stack_a);
		return ;
	}
	if (ft_stacksize(*stack_a) == 5)
	{
		sort_five(stack_a, stack_b);
		return ;
	}
	send_to_stack_b(stack_a, stack_b);
	while_insert(stack_a, stack_b);
	while (ft_is_sort(stack_a) == FALSE)
		ft_rotatestack_a(stack_a);
}
