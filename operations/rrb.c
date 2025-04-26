/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 04:24:28 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/03 04:33:46 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void reverse_rotate_b(t_list **stack_b)
{
	write(1, "rrb\n", 4);
	t_list *tmp;
	t_list *head;
	t_list *last;

	head = *stack_b;
	if (ft_lst_size(head) < 2)
		return ;
	tmp = ft_lst_last(head);
	last = ft_befor_last(stack_b);
	last->next = NULL;
	ft_lstadd_front(stack_b, tmp);
}
