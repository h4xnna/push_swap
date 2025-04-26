/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 03:46:39 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/16 17:58:53 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error_write(void)
{
	write(2, "Error \n", 8);
}

void	ft_free(t_list *stack_a)
{
	t_list	*tmp;

	while (stack_a)
	{
		tmp = stack_a->next;
		free(stack_a);
		stack_a = tmp;
	}
}

int	lower(t_list *stack_b, int content)
{
	int	miin;

	miin = min(stack_b);
	if (miin > content)
	{
		return (max(stack_b));
	}
	while (stack_b)
	{
		if (stack_b->content > miin && stack_b->content < content)
		{
			miin = stack_b->content;
		}
		stack_b = stack_b->next;
	}
	return (miin);
}

int	deep(int content, t_list *stack_a)
{
	int	i;

	i = 0;
	while (stack_a->content != content)
	{
		stack_a = stack_a->next;
		i++;
	}
	return (i);
}

void	ft_free_creat_args(t_list **stack_a)
{
	ft_free(*stack_a);
	*stack_a = NULL;
	return ;
}
