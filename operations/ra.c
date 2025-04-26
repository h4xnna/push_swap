/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 10:39:53 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/03 04:35:06 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rotate_a(t_list **stack_a)
{
	write(1, "ra\n", 3);
	t_list	*tmp;
	t_list	*head;
	t_list	*first;

	head = *stack_a;
	if (ft_lst_size(head) < 2)
		return ;
	tmp = head->next;
	first = head;
	first->next = NULL;
	*stack_a = tmp;
	// swap(&tmp->content, &head->content);
	ft_lstadd_back(&tmp, first);
	// tmp = ft_lst_last(head);
}
