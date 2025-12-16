/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsayed <balsayed@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:03:24 by balsayed          #+#    #+#             */
/*   Updated: 2025/12/16 23:40:24 by balsayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_stack_node **stack)
{
	t_stack_node	*first;
	t_stack_node	*second;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	second->prev = NULL;
	first->prev = second;
	if (first->next)
		first->next->prev = first;
}

void	sa(t_stack_node **a, bool print)
{
	ft_swap(a);
	if (print)
		write(1, "sa\n", 3);
}

void	sb(t_stack_node **b, bool print)
{
	ft_swap(b);
	if (print)
		write(1, "sb\n", 3);
}

void	ss(t_stack_node **a, t_stack_node **b, bool print)
{
	ft_swap(a);
	ft_swap(b);
	if (print)
		write(1, "ss\n", 3);
}
