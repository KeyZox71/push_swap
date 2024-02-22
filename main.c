/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:14:22 by adjoly            #+#    #+#             */
/*   Updated: 2024/02/22 13:28:28 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ac < 2)
	{
		ft_putendl_fd("Error", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
	ft_check_args_format(av);
	stack_b = NULL;
	stack_a = ft_parsing(ac, av);
	if (ft_stacksize(stack_a) <= 1)
	{
		ft_stackclear(&stack_a);
		exit(EXIT_FAILURE);
	}
	ft_check_double(&stack_a);
	ft_algo(&stack_a, &stack_b);
	ft_stackclear(&stack_a);
	ft_stackclear(&stack_b);
	return (0);
}

