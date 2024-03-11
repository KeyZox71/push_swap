/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:14:22 by adjoly            #+#    #+#             */
/*   Updated: 2024/03/08 14:17:09 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_args(char **av)
{
	char	**tmp;
	char	*tmp_av;

	tmp = av;
	tmp++;
	while (*tmp)
	{
		tmp_av = *tmp;
		while (*tmp_av)
		{
			if ((*tmp_av == '+' || *tmp_av == '-'))
			{
				if (!ft_isdigit(*tmp_av + 1))  
				{
					ft_putendl_fd("Error", STDERR_FILENO);
					exit(EXIT_FAILURE);
				}
				else
				{
					while (!*tmp_av && ft_isdigit(*tmp_av))
						tmp_av++;
				}
			}
			tmp_av++;
		}
		tmp++;
	}
}

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
	ft_check_args(av);
	stack_b = NULL;
	stack_a = ft_parsing(av);
	if (ft_stacksize(stack_a) <= 1)
	{
		ft_stackclear(&stack_a);
		exit(EXIT_SUCCESS);
	}
	if (ft_is_sort(&stack_a) == TRUE)
	{
		ft_stackclear(&stack_a);
		exit(EXIT_SUCCESS);
	}
	ft_check_double(&stack_a);
	ft_algo(&stack_a, &stack_b);
	ft_stackclear(&stack_a);
	ft_stackclear(&stack_b);
	return (0);
}
