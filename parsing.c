/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:05:43 by adjoly            #+#    #+#             */
/*   Updated: 2024/02/08 17:41:41 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freearr(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

t_stack	*ft_parsing(int ac, char **av)
{
	t_stack *parsed_data;
	char	**tmp_split;
	size_t	i;

	i = 0;
	(void)ac;
	av++;
	parsed_data = NULL;
	while (*av)
	{
		i = 0;
		tmp_split = ft_split(*av, ' ');
		while (tmp_split[i])
		{
			ft_stackadd_back(&parsed_data, ft_stacknew(ft_atoi(tmp_split[i])));
			i++;
		}
		ft_freearr(tmp_split);
		av++;
	}
	return (parsed_data);
}
