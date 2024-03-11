/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotatestack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:53:55 by adjoly            #+#    #+#             */
/*   Updated: 2024/03/11 15:09:40 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotatestack(t_stack **stack)
{
	t_stack	*tmp_last;
	t_stack	*start;

	if (!stack || !(*stack))
		return ;
	start = (*stack)->next;
	tmp_last = ft_stacklast(*stack);
	tmp_last->next = *stack;
	(*stack)->next = NULL;
	(*stack) = start;
}

void	ft_rotatestack_a(t_stack **stack_a)
{
	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	ft_putendl_fd("ra", STDOUT_FILENO);
	ft_rotatestack(stack_a);
}

void	ft_rotatestack_b(t_stack **stack_b)
{
	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	ft_putendl_fd("rb", STDOUT_FILENO);
	ft_rotatestack(stack_b);
}

void	ft_rotatestack_r(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	ft_putendl_fd("rr", STDOUT_FILENO);
	ft_rotatestack(stack_a);
	ft_rotatestack(stack_b);
}
