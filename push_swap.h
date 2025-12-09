/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsayed <balsayed@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 22:20:22 by balsayed          #+#    #+#             */
/*   Updated: 2025/12/09 19:08:14 by balsayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack_node
{
    int						value;
    int						index;      
	int						pos;        
    int						cost;       
    int						target_pos; 
    struct s_stack_node		*target_node;
    struct s_stack_node		*next;      
    struct s_stack_node		*prev;
} t_stack_node;
int		ft_stack_size(t_stack_node *lst);
void	ft_stack_add_front(t_stack_node **lst, t_stack_node *new);
void    ft_stack_clear(t_stack_node **lst);
void	ft_stack_add_back(t_stack_node **lst, t_stack_node *new);
void    ft_delone(t_stack_node *node);
void    handle_error(t_stack_node **stack);
long    ft_atoi_digit(const char *str, t_stack_node **stack);
char	**ft_split(char const *s, char c);
t_stack_node    *ft_stack_new(int value);
t_stack_node	*ft_stack_last(t_stack_node *lst);
#endif
