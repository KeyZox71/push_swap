/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:45:25 by adjoly            #+#    #+#             */
/*   Updated: 2024/03/11 15:56:15 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_args_format(char **av)
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
			if (!ft_isdigit(*tmp_av) && *tmp_av != 32 \
					&& *tmp_av != '-' && *tmp_av != '+')
			{
				ft_putendl_fd("Error", STDERR_FILENO);
				exit(EXIT_SUCCESS);
			}
			tmp_av++;
		}
		tmp++;
	}
}

void	ft_check_double(t_stack	**stack)
{
	t_stack	*index;
	t_stack	*tmp;	

	index = *stack;
	while (index)
	{
		tmp = index->next;
		while (tmp)
		{
			if (index->nb == tmp->nb)
			{
				ft_stackclear(stack);
				ft_putendl_fd("Error", STDERR_FILENO);
				exit(EXIT_FAILURE);
			}
			tmp = tmp->next;
		}
		index = index->next;
	}
}
