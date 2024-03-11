/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_mouv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:12:47 by adjoly            #+#    #+#             */
/*   Updated: 2024/03/11 16:21:54 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack	**stack_a)
{
	if ((*stack_a)->nb > (*stack_a)->next->nb)
		ft_swap_a(*stack_a);
	if (get_stack_max(stack_a) == 2)
		ft_reverserotate_a(stack_a);
}
