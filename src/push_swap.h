/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:18:29 by adjoly            #+#    #+#             */
/*   Updated: 2024/03/11 16:07:50 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_stack
{
	int				nb;
	struct s_stack	*next;
}					t_stack;

// stack
void		ft_stackadd_back(t_stack **stack, t_stack *new);
void		ft_stackadd_front(t_stack **stack, t_stack *new);
void		ft_stackclear(t_stack **stack);
void		ft_stackdelone(t_stack *stack);
t_stack		*ft_stacklast(t_stack *stack);
t_stack		*ft_stacknew(int content);
size_t		ft_stacksize(t_stack *stack);
t_stack		*ft_stackbeforelast(t_stack *stack);

// operations
void		ft_swap_a(t_stack *stack_a);
void		ft_swap_b(t_stack *stack_b);
void		ft_stack_ss(t_stack *stack_a, t_stack *stack_b);

void		ft_push_a(t_stack **stack_a, t_stack **stack_b);
void		ft_push_b(t_stack **stack_a, t_stack **stack_b);

void		ft_rotatestack_a(t_stack **stack_a);
void		ft_rotatestack_b(t_stack **stack_b);
void		ft_rotatestack_r(t_stack **stack_a, t_stack **stack_b);

void		ft_reverserotate_a(t_stack **stack_a);
void		ft_reverserotate_b(t_stack **stack_b);
void		ft_reverserotate_r(t_stack **stack_a, t_stack **stack_b);

// algo
void		ft_algo(t_stack **stack_a, t_stack **stack_b);
int			find_median(t_stack **stack);
void		insert_nb(t_stack **stack_a, t_stack **stack_b);
void		while_insert(t_stack **stack_a, t_stack **stack_b);
size_t		get_lowest_cost(t_stack **stack_a, t_stack **stack_b);
t_boolean	ft_is_sort(t_stack **stack);
int			find_q_one(t_stack **stack);

// get_min_max
size_t		get_stack_max(t_stack **stack);
size_t		get_stack_min(t_stack **stack);

// error checkin
void		ft_check_args_format(char **av);
t_stack		*ft_parsing(char **av);
void		ft_check_double(t_stack	**stack);
void		ft_print_stack(t_stack *stack);

// utils
t_boolean	ft_is_sort(t_stack **stack);
void		ft_senderror(void);

#endif
