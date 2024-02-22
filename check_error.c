/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:45:25 by adjoly            #+#    #+#             */
/*   Updated: 2024/02/18 18:30:08 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_check_args_format(char **av)
{
	size_t	i;
	size_t	j;

	i = 0;
	av++;
	while (*av)
	{
		j = 0;
		while (**av)
		{
			if (!ft_isdigit(**av) && **av != 32 && **av != '-' && **av != '+')
			{
				ft_putendl_fd("Error", STDERR_FILENO);
				exit(EXIT_SUCCESS);
			}
			j++;
			(*av)++;
		}
		(*av) -= j;
		i++;
		av++;
	}
	av -= i;
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
