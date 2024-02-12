/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:14:22 by adjoly            #+#    #+#             */
/*   Updated: 2024/02/12 14:18:37 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack;
	t_stack	*tmp;
	t_stack	*stack_b;

	stack = ft_parsing(ac, av);
	tmp = stack;
	stack_b = NULL;
	while (tmp)
	{
		ft_printf("%d\n", tmp->nb);
		tmp = tmp->next;
	}
	ft_push_b(&stack, &stack_b);
	ft_swap_a(stack);
	tmp = stack;
	while (tmp)
	{
		ft_printf("%d\n", tmp->nb);
		tmp = tmp->next;
	}
	ft_printf("stackb\n");
	tmp = stack_b;
	while (tmp)
	{
		ft_printf("%d\n", tmp->nb);
		tmp = tmp->next;
	}
	ft_stackclear(&stack);
	ft_stackclear(&stack_b);
	return (0);
}

