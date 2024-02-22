/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverserotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:41:25 by adjoly            #+#    #+#             */
/*   Updated: 2024/02/15 13:30:20 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_reverserotate(t_stack **stack)
{
	t_stack	*bfrlast;
	t_stack	*last;
	t_stack	*stack_start;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	bfrlast = ft_stackbeforelast(*stack);
	last = ft_stacklast(*stack);
	bfrlast->next = NULL;
	stack_start = (*stack);
	(*stack) = last;
	(*stack)->next = stack_start;
}

void	ft_reverserotate_a(t_stack **stack_a)
{
	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	ft_putendl_fd("rra", STDOUT_FILENO);
	ft_reverserotate(stack_a);
}

void	ft_reverserotate_b(t_stack **stack_b)
{
	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	ft_putendl_fd("rrb", STDOUT_FILENO);
	ft_reverserotate(stack_b);
}

void	ft_reverserotate_r(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	ft_putendl_fd("rrr", STDOUT_FILENO);
	ft_reverserotate(stack_a);
	ft_reverserotate(stack_b);
}

