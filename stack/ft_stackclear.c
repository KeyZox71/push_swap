/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:54:56 by adjoly            #+#    #+#             */
/*   Updated: 2024/02/22 13:32:09 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stackclear(t_stack **stack)
{
	t_stack	*tmp;

	tmp = NULL;
	while (stack && *stack)
	{
		tmp = (*stack)->next;
		ft_stackdelone(*stack);
		*stack = tmp;
	}
}
