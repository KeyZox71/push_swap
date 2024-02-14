/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotatestack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:53:55 by adjoly            #+#    #+#             */
/*   Updated: 2024/02/13 13:36:51 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotatestack(t_stack **stack)
{
	t_stack	*tmp_last;
	t_stack	*start;

	start = (*stack)->next;
	tmp_last = ft_stacklast(*stack);
	tmp_last->next = *stack;
	(*stack)->next = NULL;
	(*stack) = start;
}

void	ft_rotatestack_a(t_stack **stack_a)
{
	ft_putendl_fd("ra", STDOUT_FILENO);
	ft_rotatestack(stack_a);
}

void	ft_rotatestack_b(t_stack **stack_b)
{
	ft_putendl_fd("rb", STDOUT_FILENO);
	ft_rotatestack(stack_b);
}

