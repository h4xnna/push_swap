/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:54:06 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/16 18:15:22 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_list_2(t_list **stack_b)
{
	int	first;
	int	second;

	first = (*stack_b)->content;
	second = (*stack_b)->next->content;
	if (first < second)
		return ;
	else
		swap_a(stack_b);
}

int	bestmoove(t_list *stack_a, t_list *stack_b)
{
	int		best_move;
	int		operations;
	int		count;
	int		petiti;
	t_list	*head;

	count = 0;
	operations = 0;
	head = stack_a;
	while (head)
	{
		count = 1;
		count += simulation_push_top_int(head->content, stack_a);
		petiti = lower(stack_b, head->content);
		count += simulation_push_top_int(petiti, stack_b);
		if (count < operations || operations == 0)
		{
			operations = count;
			best_move = head->content;
			if (count == 1)
				return (best_move);
		}
		head = head->next;
	}
	return (best_move);
}

void	start(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	best_move;
	int	petiit;

	size = ft_lst_size(*stack_a);
	if (size >= 6)
		push_b(stack_a, stack_b);
	if (size >= 7)
		push_b(stack_a, stack_b);
	while (ft_lst_size(*stack_a) > 5)
	{
		best_move = bestmoove(*stack_a, *stack_b);
		push_top_int_a(best_move, stack_a);
		petiit = lower(*stack_b, best_move);
		push_top_int_b(petiit, stack_b);
		push_b(stack_a, stack_b);
	}
}

void	end(t_list **stack_a, t_list **stack_b)
{
	int	graand;

	sort_list_5(stack_a, stack_b);
	while (*stack_b)
	{
		graand = bigest(*stack_a, (*stack_b)->content);
		push_top_int_a(graand, stack_a);
		push_a(stack_a, stack_b);
	}
	push_top_int_a(min(*stack_a), stack_a);
}

void	algo(t_list **stack_a, t_list **stack_b)
{
	start(stack_a, stack_b);
	end(stack_a, stack_b);
}
