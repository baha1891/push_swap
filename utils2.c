/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsayed <balsayed@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 23:10:02 by balsayed          #+#    #+#             */
/*   Updated: 2025/12/16 16:19:45 by balsayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

void	ft_stack_add_front(t_stack_node **lst, t_stack_node *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	if (*lst)
		(*lst)->prev = new;
	*lst = new;
	new->prev = NULL;
}

void	ft_stack_add_back(t_stack_node **lst, t_stack_node *new)
{
	t_stack_node	*last;

	if (!lst || !new)
		return ;
	new->next = NULL;
	if (*lst == NULL)
	{
		*lst = new;
		new->prev = NULL;
	}
	else
	{
		last = ft_stack_last(*lst);
		last->next = new;
		new->prev = last;
	}
}

static long	ft_check_sign_digit(const char *str, int *i,
			t_stack_node **stack)
{
	long	sign;

	sign = 1;
	while (str[*i] == 32 || (str[*i] >= 9 && str[*i] <= 13))
		(*i)++;
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sign = -1;
		(*i)++;
	}
	if (str[*i] < '0' || str[*i] > '9')
		handle_error(stack);
	return (sign);
}

long	ft_atoi_digit(const char *str, t_stack_node **stack)
{
	long	sign;
	long	result;
	int		i;

	i = 0;
	result = 0;
	sign = ft_check_sign_digit(str, &i, stack);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if ((sign == 1 && result > INT_MAX)
			|| (sign == -1 && result > (long)INT_MAX + 1))
			handle_error(stack);
		i++;
	}
	if (str[i] != '\0')
		handle_error(stack);
	return (sign * result);
}
