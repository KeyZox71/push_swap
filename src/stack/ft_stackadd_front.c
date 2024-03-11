/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:52:38 by adjoly            #+#    #+#             */
/*   Updated: 2024/02/22 13:32:21 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stackadd_front(t_stack **stack, t_stack *new)
{
	if (!stack)
		return ;
	if (!new)
		return ;
	new->next = *stack;
	*stack = new;
}
