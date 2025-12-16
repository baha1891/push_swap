/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsayed <balsayed@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 22:20:22 by balsayed          #+#    #+#             */
/*   Updated: 2025/12/16 20:08:20 by balsayed         ###   ########.fr       */
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

/* Operation wrappers (print operations) */
void			sa(t_stack_node **a, bool print);
void			sb(t_stack_node **b, bool print);
void			ss(t_stack_node **a, t_stack_node **b, bool print);
void			pa(t_stack_node **a, t_stack_node **b);
void			pb(t_stack_node **a, t_stack_node **b);
void			ra(t_stack_node **a, bool print);
void			rb(t_stack_node **b, bool print);
void			rr(t_stack_node **a, t_stack_node **b, bool print);
void			rra(t_stack_node **a, bool print);
void			rrb(t_stack_node **b, bool print);
void			rrr(t_stack_node **a, t_stack_node **b, bool print);

long			ft_atoi_digit(const char *str, t_stack_node **stack);
char			**ft_split(char const *s, char c);
size_t			ft_strlcpy(char *dest, const char *src, size_t destsize);
t_stack_node		*ft_stack_new(int value);
t_stack_node		*ft_stack_last(t_stack_node *lst);
t_stack_node		*find_highest(t_stack_node *stack);
bool			stack_sorted(t_stack_node *stack);
int			stack_len(t_stack_node *stack);
void			sort_three(t_stack_node **a);
void			sort_stacks(t_stack_node **a, t_stack_node **b);

#endif
