/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:40:39 by adjoly            #+#    #+#             */
/*   Updated: 2024/02/05 11:42:15 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	if (!stack)
		return ;
	if (!*stack)
	{
		(*stack) = new;
		return ;
	}
	ft_stacklast(*stack)->next = new;
}

