/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 21:49:16 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/16 17:59:37 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	swap_a(t_list **stack_a)
{
	write(1, "sa\n", 3);
	
	t_list	*head;

	head = *stack_a;
	if (ft_lst_size(head) <= 1)
		return ;
	swap(&head->content, &head->next->content);
}
