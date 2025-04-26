/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 03:19:23 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/03 04:34:15 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

void rotate_a_b(t_list **stack_a, t_list **stack_b )
{
	write(1, "rr\n", 3);
	t_list *tmp;
	t_list *head; 
	t_list *first;

	head = *stack_a;
	if (ft_lst_size(head) < 2)
		return ;
	tmp = head->next;
	first = head;
	first->next = NULL;
	*stack_a = tmp;
	ft_lstadd_back(&tmp, first);
	head = *stack_b;
	if (ft_lst_size(head) < 2)
		return ;

	tmp = head->next;
	first = head;
	first->next = NULL;
	*stack_b = tmp;
	ft_lstadd_back(&tmp, first);
}
