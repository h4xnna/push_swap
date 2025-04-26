/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 01:39:09 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/03 04:31:17 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void reverse_rotate_a(t_list **stack_a)
{
	write(1, "rra\n", 4);
	t_list	*tmp;
	t_list	*head;
	t_list	*last;

	head = *stack_a;
	if (ft_lst_size(head) < 2)
		return ;
	tmp = ft_lst_last(head);
	last = ft_befor_last(stack_a);
	last->next = NULL;
	ft_lstadd_front(stack_a, tmp);
}
