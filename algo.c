/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:29:26 by adjoly            #+#    #+#             */
/*   Updated: 2024/02/22 13:29:52 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	send_to_stack_b(t_stack **stack_a, t_stack **stack_b)
{
	size_t	stack_size;
	int		median;

	while (*stack_a)
	{
		median = find_median(stack_a);
		stack_size = ft_stacksize(*stack_a);
		while (*stack_a && stack_size != 0)
		{
			if ((*stack_a)->nb < median)
				ft_push_b(stack_a, stack_b);
			else
				ft_rotatestack_a(stack_a);
			stack_size--;
		}
	}
}

size_t	get_stack_max(t_stack **stack)
{
	t_stack	*tmp;
	size_t	i;
	size_t	i_max;
	int		max;

	tmp = *stack;
	max = tmp->nb;
	i_max = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->nb > max)
		{
			max = tmp->nb;
			i_max = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (i_max);	
}

void	ft_algo(t_stack **stack_a, t_stack **stack_b)
{
	size_t	max;
	size_t	i;
	size_t	stack_size;

	i = 0;
	send_to_stack_b(stack_a, stack_b);
	stack_size = ft_stacksize(*stack_b);
	while (*stack_b)
	{
		max = get_stack_max(stack_b);
		i = 0;
		if (max < stack_size / 2)
		{
			while (i < max)
			{
				ft_rotatestack_b(stack_b);
				i++;
			}
		}
		else
		{
			i = stack_size;
			while (i > max)
			{
				ft_reverserotate_b(stack_b);
				i--;
			}
		}
		ft_push_a(stack_a, stack_b);
		stack_size--;
	}
}
