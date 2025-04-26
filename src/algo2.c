/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:18:58 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/16 17:01:34 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max(t_list *stack_a)
{
	int	k;

	k = stack_a->content;
	while (stack_a->next)
	{
		if (stack_a->content < stack_a->next->content)
		{
			if (k < stack_a->next->content)
				k = stack_a->next->content;
		}
		stack_a = stack_a->next;
	}
	return (k);
}

int	simulation_push_top_int(int content, t_list *stack_a)
{
	int	size_a;
	int	iindex;

	iindex = deep(content, stack_a);
	size_a = ft_lst_size(stack_a);
	if (iindex > (size_a / 2))
		iindex = size_a - iindex;
	return (iindex);
}

int	bigest(t_list *stack_b, int content)
{
	int	maximus;

	maximus = max(stack_b);
	if (maximus < content)
	{
		return (min(stack_b));
	}
	while (stack_b)
	{
		if (stack_b->content < maximus && stack_b->content > content)
		{
			maximus = stack_b->content;
		}
		stack_b = stack_b->next;
	}
	return (maximus);
}

void	push_top_int_a(int content, t_list **stack_a)
{
	int	size_a;
	int	iindex;

	iindex = deep(content, *stack_a);
	size_a = ft_lst_size(*stack_a);
	while ((*stack_a)->content != content)
	{
		if (iindex < (size_a / 2))
			rotate_a(stack_a);
		else
			reverse_rotate_a(stack_a);
	}
}

void	push_top_int_b(int content, t_list **stack_b)
{
	int	size_b;
	int	iindex;

	iindex = deep(content, *stack_b);
	size_b = ft_lst_size(*stack_b);
	while ((*stack_b)->content != content)
	{
		if (iindex < (size_b / 2))
			rotate_b(stack_b);
		else
			reverse_rotate_b(stack_b);
	}
}
