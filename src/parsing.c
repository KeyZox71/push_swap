/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:05:43 by adjoly            #+#    #+#             */
/*   Updated: 2024/03/18 16:57:06 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_nbrlen(char *s)
{
	char	*tmp;
	char	*nbrlen;

	tmp = s;
	while (*tmp || *tmp == '-' || *tmp == '+' || *tmp == '0')
		tmp++;
	nbrlen = tmp;
	while (*nbrlen)
		nbrlen++;
	return (nbrlen - tmp);
}

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

void	ft_senderror_split(t_stack **stack, char **split)
{
	ft_freearr(split);
	ft_senderror(stack);
}

t_stack	*ft_parsing(char **av)
{
	t_stack	*parsed_data;
	char	**tmp_split;
	char	**split;
	char	**tmp_av;

	tmp_av = av;
	tmp_av++;
	parsed_data = NULL;
	while (*tmp_av)
	{
		split = ft_split(*tmp_av, ' ');
		tmp_split = split;
		while (*tmp_split)
		{
			if (ft_nbrlen(*tmp_split) > 11 || ft_atoll(*tmp_split) > 2147483647 \
					|| ft_atoll(*tmp_split) < -2147483648)
				ft_senderror_split(&parsed_data, split);
			ft_stackadd_back(&parsed_data, ft_stacknew(ft_atoi(*tmp_split)));
			tmp_split++;
		}
		ft_freearr(split);
		tmp_av++;
	}
	return (parsed_data);
}
