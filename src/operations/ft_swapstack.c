/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapstack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:55:21 by adjoly            #+#    #+#             */
/*   Updated: 2024/03/11 15:09:06 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swapstack(t_stack *stack)
{
	int	tmp;

	if (!stack)
		return ;
	tmp = stack->nb;
	stack->nb = stack->next->nb;
	stack->next->nb = tmp;
}

void	ft_swap_a(t_stack *stack_a)
{
	if (!stack_a)
		return ;
	ft_putendl_fd("sa", STDOUT_FILENO);
	ft_swapstack(stack_a);
}

void	ft_swap_b(t_stack *stack_b)
{
	if (!stack_b)
		return ;
	ft_putendl_fd("sb", STDOUT_FILENO);
	ft_swapstack(stack_b);
}

void	ft_stack_ss(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_a || !stack_b)
		return ;
	ft_putendl_fd("ss", STDOUT_FILENO);
	ft_swapstack(stack_a);
	ft_swapstack(stack_b);
}
