/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsayed <balsayed@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 22:19:33 by balsayed          #+#    #+#             */
/*   Updated: 2025/12/15 20:31:20 by balsayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	(void)b;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv = argv + 1;
	init_stack_a(&a, argv);

    if (!stack_sorted(a))
    {
        if (stack_len(a) == 2)
            sa(&a, false); // دالة لترتيب رقمين فقط
        else if (stack_len(a) == 3)
            sort_three(&a); // دالة لترتيب 3 أرقام
        else
            sort_stacks(&a, &b); // الخوارزمية الكبيرة لباقي الأرقام
    }

    // ... (سنكمل هنا لاحقاً: الفحص والترتيب) ...

    // تنظيف الذاكرة (مهم جداً لعدم خسارة درجات الـ Leaks)
    ft_stack_clear(&a);
	return (0);
}
