/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:47:05 by adjoly            #+#    #+#             */
/*   Updated: 2024/03/18 16:50:28 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_senderror(t_stack **stack)
{
	ft_putendl_fd("Error", STDERR_FILENO);
	ft_stackclear(stack);
	exit(EXIT_FAILURE);
}
