/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsayed <balsayed@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 22:19:33 by balsayed          #+#    #+#             */
/*   Updated: 2025/12/16 23:39:31 by balsayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	bool			need_free_argv;

	a = NULL;
	b = NULL;
	need_free_argv = false;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		need_free_argv = true;
	}
	else
		argv = argv + 1;
	init_stack_a(&a, argv);
	if (need_free_argv)
		free_matrix(argv);
	choose_sort(&a, &b);
	ft_stack_clear(&a);
	return (0);
}
