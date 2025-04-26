/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 01:28:35 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/03 04:34:32 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rotate_b(t_list **stack_b)
{
	write(1, "rb\n", 3);
	t_list *tmp;
	t_list *head; 
	t_list *first;

	head = *stack_b;
	if (ft_lst_size(head) < 2)
		return ;
	tmp = head->next;
	first = head;
	first->next = NULL;
	*stack_b = tmp;
	// swap(&tmp->content, &head->content);
	ft_lstadd_back(&tmp, first);
	// tmp = ft_lst_last(head);
}
