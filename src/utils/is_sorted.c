/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:39:00 by adjoly            #+#    #+#             */
/*   Updated: 2024/03/11 15:41:20 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_boolean	ft_is_sort(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->next && tmp->nb < tmp->next->nb)
		tmp = tmp->next;
	if (!tmp->next)
		return (TRUE);
	return (FALSE);
}
