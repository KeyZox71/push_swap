/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:27:04 by adjoly            #+#    #+#             */
/*   Updated: 2024/02/22 13:27:41 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_boolean	is_median(t_stack **stack, int nb)
{
	t_stack	*tmp;
	int		count;

	tmp = *stack;
	count = 0;
	while (tmp)
	{
		count += (tmp->nb < nb) - (tmp->nb > nb);
		tmp = tmp->next;
	}
	if (count == -1 || count == 0 || count == 1)
		return (TRUE);
	return (FALSE);
}

int	find_median(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (is_median(stack, tmp->nb) == TRUE)
			return (tmp->nb);
		tmp = tmp->next;
	}
	return (ERROR);
}
