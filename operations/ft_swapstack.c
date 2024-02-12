/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapstack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:55:21 by adjoly            #+#    #+#             */
/*   Updated: 2024/02/08 18:10:02 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swapstack(t_stack *stack)
{
	int	tmp;

	tmp = stack->nb;
	stack->nb = stack->next->nb;
	stack->next->nb = tmp;
}

void	ft_swap_a(t_stack *stack_a)
{
	ft_putendl_fd("sa", 1);
	ft_swapstack(stack_a);
}

void	ft_swap_b(t_stack *stack_b)
{
	ft_putendl_fd("sb", 1);
	ft_swapstack(stack_b);
}

void	ft_stack_ss(t_stack *stack_a, t_stack *stack_b)
{
	ft_putendl_fd("ss", 1);
	ft_swapstack(stack_a);
	ft_swapstack(stack_b);
}
