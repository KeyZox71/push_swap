/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushstack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:08:51 by adjoly            #+#    #+#             */
/*   Updated: 2024/02/09 15:48:39 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp_a;

	ft_putendl_fd("pb", 1);
	tmp_a = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp_a->next = *stack_a;
	*stack_a = tmp_a;
}

void	ft_push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp_b;

	ft_putendl_fd("pb", 1);
	tmp_b = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp_b->next = *stack_b;
	*stack_b = tmp_b;
}

