/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 10:14:26 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/03 04:26:18 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void push_a(t_list **stack_a, t_list **stack_b)
{
    t_list *tmp;

    if (*stack_b == NULL)
        return;
    tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    ft_lstadd_front(stack_a, tmp);
    write(1, "pa\n", 3);
}
