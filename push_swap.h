/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:18:29 by adjoly            #+#    #+#             */
/*   Updated: 2024/02/13 14:03:29 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int				nb;
	struct s_stack	*next;
}					t_stack;

#include "libft/libft.h"

t_stack	*ft_parsing(int ac, char **av);

void	ft_stackadd_back(t_stack **stack, t_stack *new);
void	ft_stackadd_front(t_stack **stack, t_stack *new);
void	ft_stackclear(t_stack **stack);
void	ft_stackdelone(t_stack *stack);
t_stack	*ft_stacklast(t_stack *stack);
t_stack	*ft_stacknew(int content);
size_t	ft_stacksize(t_stack *stack);
t_stack *ft_stackbeforelast(t_stack *stack);

void	ft_swap_a(t_stack *stack_a);
void	ft_swap_b(t_stack *stack_b);
void	ft_stack_ss(t_stack *stack_a, t_stack *stack_b);

void	ft_push_a(t_stack **stack_a, t_stack **stack_b);
void	ft_push_b(t_stack **stack_a, t_stack **stack_b);

void	ft_rotatestack_a(t_stack **stack_a);
void	ft_rotatestack_b(t_stack **stack_b);

void	ft_reverserotate_a(t_stack **stack_a);
void	ft_reverserotate_b(t_stack **stack_b);
#endif
