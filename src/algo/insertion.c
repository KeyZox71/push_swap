/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:49:14 by adjoly            #+#    #+#             */
/*   Updated: 2024/03/11 16:03:14 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	prepare_to_send_a(t_stack **stack_b, size_t lowest_cost_b)
{
	size_t	i;

	if (lowest_cost_b < (ft_stacksize(*stack_b) / 2))
	{
		while (stack_b && *stack_b && lowest_cost_b > 0)
		{
			ft_rotatestack_b(stack_b);
			lowest_cost_b--;
		}
	}
	else
	{
		i = 0;
		while (stack_b && *stack_b && lowest_cost_b < ft_stacksize(*stack_b))
		{
			ft_reverserotate_b(stack_b);
			lowest_cost_b++;
		}
	}
}

size_t	get_index(t_stack **stack, int nb)
{
	t_stack	*tmp;
	size_t	i;

	i = 1;
	tmp = (*stack);
	while (tmp && tmp->next)
	{
		if (tmp->nb < nb && tmp->next->nb > nb)
			return (i);
		tmp = tmp->next;
		i++;
	}
	if (tmp && nb > tmp->nb && nb < (*stack)->nb)
		return (0);
	return (get_stack_min(stack));
}

size_t	get_lowest_cost(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	size_t	i_lowest_cost;
	size_t	lowest_cost_b;
	size_t	actual_cost_b;

	i_lowest_cost = get_index(stack_a, (*stack_b)->nb);
	tmp = *stack_b;
	actual_cost_b = 0;
	lowest_cost_b = 0;
	while (tmp)
	{
		if ((get_index(stack_a, tmp->nb) < i_lowest_cost))
		{
			i_lowest_cost = get_index(stack_a, tmp->nb);
			lowest_cost_b = actual_cost_b;
		}
		actual_cost_b++;
		tmp = tmp->next;
	}
	prepare_to_send_a(stack_b, lowest_cost_b);
	return (i_lowest_cost);
}

void	insert_nb(t_stack **stack_a, t_stack **stack_b)
{
	size_t	i;
	size_t	new_i_elem;
	size_t	stack_size;

	i = 0;
	new_i_elem = get_lowest_cost(stack_a, stack_b);
	stack_size = ft_stacksize(*stack_a);
	if (new_i_elem < (stack_size / 2))
	{
		while (i < new_i_elem)
		{
			ft_rotatestack_a(stack_a);
			i++;
		}
	}
	else
	{
		i = stack_size;
		while (i > new_i_elem)
		{
			ft_reverserotate_a(stack_a);
			i--;
		}
	}
	ft_push_a(stack_a, stack_b);
}

void	while_insert(t_stack **stack_a, t_stack **stack_b)
{
	while (*stack_b)
	{
		insert_nb(stack_a, stack_b);
	}
}
