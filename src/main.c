/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:14:22 by adjoly            #+#    #+#             */
/*   Updated: 2024/03/13 14:44:42 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_invalid_char(char **av)
{
	char	**tmp;
	char	*tmp_args;

	tmp = av;
	tmp++;
	while (*tmp)
	{
		tmp_args = *tmp;
		while (*tmp_args)
		{
			if (!ft_isdigit(*tmp_args) && *tmp_args != '-' && *tmp_args != '+' && *tmp_args != 32)
				ft_senderror();
			tmp_args++;
		}
		tmp++;
	}
}


void	check_double(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*check_dup;

	tmp = *stack;
	while (tmp)
	{
		check_dup = tmp->next;
		while (check_dup)
		{
			if (check_dup->nb == tmp->nb)
			{
				ft_stackclear(stack);
				ft_senderror();
			}
			check_dup = check_dup->next;
		}
		tmp = tmp->next;
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ac < 2)
		return (EXIT_SUCCESS);
	check_invalid_char(av);
	stack_b = NULL;
	stack_a = ft_parsing(av);
	if (ft_stacksize(stack_a) <= 1)
	{
		ft_stackclear(&stack_a);
		return (EXIT_SUCCESS);
	}
	if (ft_is_sort(&stack_a) == TRUE)
	{
		ft_stackclear(&stack_a);
		return (EXIT_SUCCESS);
	}
	check_double(&stack_a);
	ft_algo(&stack_a, &stack_b);
	ft_stackclear(&stack_a);
	ft_stackclear(&stack_b);
	return (EXIT_SUCCESS);
}
