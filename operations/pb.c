/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 03:05:05 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/03 04:33:14 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void push_b(t_list **stack_a, t_list **stack_b)
{
    t_list  *tmp;

    if (*stack_a == NULL)
        return ;
    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    ft_lstadd_front(stack_b, tmp);
    write(1, "pb\n", 3);
}

