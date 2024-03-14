/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_mouv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:12:47 by adjoly            #+#    #+#             */
/*   Updated: 2024/03/12 17:20:50 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <sys/types.h>

void	sort_three(t_stack **stack_a)
{
	if (get_stack_max(stack_a) == 2)
		ft_swap_a(*stack_a);
	else if (get_stack_max(stack_a) == 2 || get_stack_max(stack_a) == 0)
		ft_rotatestack_a(stack_a);
	else if (get_stack_max(stack_a) == 1)
		ft_reverserotate_a(stack_a);
	if (ft_is_sort(stack_a) == FALSE)
		sort_three(stack_a);
}

void	push_min_to_b(t_stack **stack_a, t_stack **stack_b)
{
	size_t	i_min;
	size_t	i;

	i_min = get_stack_min(stack_a);
	if (i_min < (ft_stacksize(*stack_a) / 2))
	{
		while (i_min > 0)
		{
			ft_rotatestack_a(stack_a);
			i_min--;
		}
	}
	else
	{
		i = ft_stacksize(*stack_a);
		while (i_min < i)
		{
			ft_reverserotate_a(stack_a);
			i_min++;
		}
	}
	ft_push_b(stack_a, stack_b);
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	push_min_to_b(stack_a, stack_b);
	push_min_to_b(stack_a, stack_b);
	sort_three(stack_a);
	ft_push_a(stack_a, stack_b);
	ft_push_a(stack_a, stack_b);
	if (ft_is_sort(stack_a) == FALSE)
		ft_swap_a(*stack_a);
}
