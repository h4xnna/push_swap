/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:43:57 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/16 17:38:17 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_list_3(t_list **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->content;
	second = (*stack_a)->next->content;
	third = (*stack_a)->next->next->content;
	if (first >= second && second < third)
	{
		if (first > third)
			rotate_a(stack_a);
		else
			swap_a(stack_a);
	}
	else if (first < second && second < third)
		return ;
	else if (first < second && second > third)
	{
		middle(stack_a);
	}
	else if (first > second && second > third)
	{
		swap_a(stack_a);
		reverse_rotate_a(stack_a);
	}
}

void	middle(t_list **stack_a)
{
	int	first;
	int	third;

	first = (*stack_a)->content;
	third = (*stack_a)->next->next->content;
	if (first > third)
		reverse_rotate_a(stack_a);
	else
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
}
