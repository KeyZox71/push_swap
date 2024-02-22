/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:29:26 by adjoly            #+#    #+#             */
/*   Updated: 2024/02/21 19:19:55 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"
#include <unistd.h>

size_t	get_stack_max(t_stack **stack)
{
	t_stack	*tmp;
	size_t	i;
	size_t	i_max;
	int		max;

	tmp = *stack;
	max = tmp->nb;
	i_max = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->nb > max)
		{
			max = tmp->nb;
			i_max = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (i_max);	
}

void	ft_algo(t_stack **stack_a, t_stack **stack_b)
{
	size_t	max;
	size_t	i;

	i = 0;
	while ((*stack_a))
		ft_push_b(stack_a, stack_b);
	while (*stack_b)
	{
		max = get_stack_max(stack_b);
		i = 0;
		while (i < max)
		{
			ft_rotatestack_b(stack_b);
			i++;
		}
		ft_push_a(stack_a, stack_b);
	}
}

