/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:14:22 by adjoly            #+#    #+#             */
/*   Updated: 2024/02/13 14:04:47 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*tmp;
	t_stack	*stack_b;

	stack_a = ft_parsing(ac, av);
	tmp = stack_a;
	stack_b = NULL;
	while (tmp)
	{
		ft_printf("%d\n", tmp->nb);
		tmp = tmp->next;
	}
	ft_reverserotate_a(&stack_a);
	tmp = stack_a;
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
	ft_stackclear(&stack_a);
	ft_stackclear(&stack_b);
	return (0);
}

