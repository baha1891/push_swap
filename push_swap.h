/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsayed <balsayed@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 22:20:22 by balsayed          #+#    #+#             */
/*   Updated: 2025/12/16 16:59:59 by balsayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack_node
{
	int					value;
	int					index;
	int					pos;
	int					cost;
	int					target_pos;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}		t_stack_node;

int				error_duplicate(t_stack_node *a, int n);
int				ft_stack_size(t_stack_node *lst);
void			ft_stack_add_front(t_stack_node **lst, t_stack_node *new);
void			ft_stack_clear(t_stack_node **lst);
void			ft_stack_add_back(t_stack_node **lst, t_stack_node *new);
void			ft_delone(t_stack_node *node);
void			handle_error(t_stack_node **stack);
void			init_stack_a(t_stack_node **a, char **argv);
/* Operations helpers */
void			ft_swap(t_stack_node **stack);
void			ft_push(t_stack_node **from, t_stack_node **to);
void			ft_rotate(t_stack_node **stack);
void			ft_rev_rotate(t_stack_node **stack);

/* Operation wrappers (print operations) */
void			sa(t_stack_node **a);
void			sb(t_stack_node **b);
void			ss(t_stack_node **a, t_stack_node **b);
void			pa(t_stack_node **a, t_stack_node **b);
void			pb(t_stack_node **a, t_stack_node **b);
void			ra(t_stack_node **a);
void			rb(t_stack_node **b);
void			rr(t_stack_node **a, t_stack_node **b);
void			rra(t_stack_node **a);
void			rrb(t_stack_node **b);
void			rrr(t_stack_node **a, t_stack_node **b);

long			ft_atoi_digit(const char *str, t_stack_node **stack);
char			*ft_split(char const *s, char c);
size_t			ft_strlcpy(char *dest, const char *src, size_t destsize);
t_stack_node	*ft_stack_new(int value);
t_stack_node	*ft_stack_last(t_stack_node *lst);

#endif
