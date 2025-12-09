/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsayed <balsayed@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 22:19:33 by balsayed          #+#    #+#             */
/*   Updated: 2025/12/09 21:38:17 by balsayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack_node *a; 
    t_stack_node *b; 

    a = NULL; 
    b = NULL;
    if (argc == 1 || (argc == 2 && !argv[1][0]))
        return (1);
    i = 1;
    while (i < argc)
    {
        input_matrix = ft_split(argv[i], ' '); 
        init_stack_a(&a, input_matrix);
        free_matrix(input_matrix); 
        i++;
    }
    else
    {
        init_stack_a(&a, argv + 1);
    }

    // الخطوة 3: هنا سنتأكد هل الستاك مرتب أصلاً؟ إذا مرتب لا نفعل شيئاً

    // الخطوة 4: هنا سننادي خوارزمية الترتيب (Sorting)

    // الخطوة 5: تنظيف الذاكرة قبل الخروج
    ft_stack_clear(&a);
    ft_stack_clear(&b);
    
    return (0);
}