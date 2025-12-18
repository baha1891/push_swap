/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsayed <balsayed@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 22:20:22 by balsayed          #+#    #+#             */
/*   Updated: 2025/12/18 23:51:45 by balsayed         ###   ########.fr       */
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
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}		t_stack_node;

/* Errors & Free */
int				error_duplicate(t_stack_node *a, int n);
void			free_matrix(char **argv);
void			handle_error(t_stack_node **stack);

/* Stack Utils */
void			init_stack_a(t_stack_node **a, char **argv);
char			**ft_split(char const *s, char c);
void			init_nodes_a(t_stack_node *a, t_stack_node *b);
void			init_nodes_b(t_stack_node *a, t_stack_node *b);
void			current_index(t_stack_node *stack);
void			set_cheapest(t_stack_node *stack);
t_stack_node	*get_cheapest(t_stack_node *stack);
void			prep_for_push(t_stack_node **s, t_stack_node *n, char c);

/* Linked List Utils */
int				ft_stack_size(t_stack_node *lst);
int				stack_len(t_stack_node *stack);
t_stack_node	*ft_stack_last(t_stack_node *lst);
bool			stack_sorted(t_stack_node *stack);
t_stack_node	*ft_stack_new(int value);
void			ft_stack_add_back(t_stack_node **lst, t_stack_node *new);
t_stack_node	*find_min(t_stack_node *stack);
t_stack_node	*find_highest(t_stack_node *stack);
void			ft_stack_clear(t_stack_node **lst);
void			ft_delone(t_stack_node *node);
void			ft_stack_add_front(t_stack_node **lst, t_stack_node *new);

/* Algorithms */
void			sort_three(t_stack_node **a);
void			sort_stacks(t_stack_node **a, t_stack_node **b);
void			choose_sort(t_stack_node **a, t_stack_node **b);
void			min_on_top(t_stack_node **a);
void			move_b_to_a(t_stack_node **a, t_stack_node **b);

/* Operations */
void			sa(t_stack_node **a, bool print);
void			sb(t_stack_node **b, bool print);
void			ss(t_stack_node **a, t_stack_node **b, bool print);
void			ra(t_stack_node **a, bool print);
void			rb(t_stack_node **b, bool print);
void			rr(t_stack_node **a, t_stack_node **b, bool print);
void			rra(t_stack_node **a, bool print);
void			rrb(t_stack_node **b, bool print);
void			rrr(t_stack_node **a, t_stack_node **b, bool print);
void			pa(t_stack_node **a, t_stack_node **b);
void			pb(t_stack_node **a, t_stack_node **b);

/* Lib Helpers */
long			ft_atol_digit(const char *str, t_stack_node **stack);
size_t			ft_strlcpy(char *dest, const char *src, size_t destsize);

#endif
