/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:01:35 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/16 18:27:24 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_list_5(t_list **stack_a, t_list **stack_b)
{
	int		mini;
	int		min2;
	t_list	*elem;

	mini = min(*stack_a);
	elem = search(mini, *stack_a);
	push_top(elem, stack_a);
	push_b(stack_a, stack_b);
	if (ft_lst_size(*stack_a) == 4)
	{
		min2 = min(*stack_a);
		push_top(search(min2, *stack_a), stack_a);
		push_b(stack_a, stack_b);
	}
	sort_list_3(stack_a);
	push_a(stack_a, stack_b);
	if (ft_lst_size(*stack_a) == 4)
		push_a(stack_a, stack_b);
}

int	min(t_list *stack_a)
{
	int		k;

	k = stack_a->content;
	while (stack_a->next)
	{
		if (stack_a->content > stack_a->next->content)
		{
			if (k > stack_a->next->content)
				k = stack_a->next->content;
		}
		stack_a = stack_a->next;
	}
	return (k);
}

t_list	*search(int k, t_list *stack_a)
{
	while (stack_a)
	{
		if (k == (stack_a->content))
			return (stack_a);
		stack_a = stack_a->next;
	}
	return (stack_a);
}

void	push_top(t_list *elem, t_list **stack_a)
{
	while ((*stack_a)->content != elem->content)
	{
		reverse_rotate_a(stack_a);
	}
}
