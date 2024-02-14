/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacklast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:18:01 by adjoly            #+#    #+#             */
/*   Updated: 2024/02/13 13:40:36 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack *ft_stacklast(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
		return (NULL);
	tmp = stack;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);

}

t_stack *ft_stackbeforelast(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
		return (NULL);
	tmp = stack;
	while (tmp && tmp->next && tmp->next->next)
		tmp = tmp->next;
	return (tmp);

}

