/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:23:26 by adjoly            #+#    #+#             */
/*   Updated: 2024/03/11 15:59:26 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

size_t	get_stack_min(t_stack **stack)
{
	size_t	i;
	size_t	i_min;
	int		nb_min;
	t_stack	*tmp;

	i = 0;
	i_min = 0;
	nb_min = INT_MAX;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->nb < nb_min)
		{
			i_min = i;
			nb_min = tmp->nb;
		}
		tmp = tmp->next;
		i++;
	}
	return (i_min);
}
