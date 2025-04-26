/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 21:33:20 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/03 04:29:01 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_b(t_list **stack_b, t_list **stack_a )
{
	write(1, "rrb\n", 4);
	t_list	*tmp;
	t_list	*head;
	t_list	*last;

	head = *stack_b;
	if (ft_lst_size(head) < 2)
		return ;
	tmp = ft_lst_last(head);
	last = ft_befor_last(stack_b);
	last->next = NULL;
	ft_lstadd_front(stack_b, tmp);
	head = *stack_a;
	if (ft_lst_size(head) < 2)
		return ;
	tmp = ft_lst_last(head);
	last = ft_befor_last(stack_a);
	last->next = NULL;
	ft_lstadd_front(stack_a, tmp);
}
