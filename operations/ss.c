/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 02:39:05 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/03 04:30:17 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_ab(t_list **stack_b, t_list **stack_a)
{
	write(1, "ss\n", 3);
	t_list	*head;

	head = *stack_b;
	if (ft_lst_size(head) <= 1)
		return ;
	swap(&head->content, &head->next->content);
	head = *stack_a;
	if (ft_lst_size(head) <= 1)
		return ;
	swap(&head->content, &head->next->content);
}
