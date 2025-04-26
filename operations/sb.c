/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 02:29:44 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/03 04:22:20 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_b(t_list **stack_b)
{
	t_list	*head;

	head = *stack_b;
	if (ft_lst_size(head) <= 1)
		return ;
	swap(&head->content, &head->next->content);
	write(1, "sb\n", 3);
}
