/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsayed <balsayed@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:08:15 by balsayed          #+#    #+#             */
/*   Updated: 2025/12/14 14:32:38 by balsayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool    stack_sorted(t_stack_node *stack)
{
    if (!stack) // إذا كانت القائمة فارغة تعتبر مرتبة
        return (true);
    while (stack->next) // نمر على العناصر حتى قبل الأخير
    {
        // إذا وجدنا عنصراً أكبر من الذي يليه، فالقائمة غير مرتبة
        if (stack->value > stack->next->value)
            return (false);
        stack = stack->next;
    }
    return (true);
}
