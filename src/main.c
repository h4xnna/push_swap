/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:57:12 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/16 17:57:12 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_printf_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("[%p] : node, content : %d, node->next [%p]\n", lst,
			lst->content, lst->next);
		lst = lst->next;
	}
	printf("\n");
}

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	int	size_a;

	size_a = ft_lst_size(*stack_a);
	if (size_a == 2)
		sort_list_2(stack_a);
	else if (size_a == 3)
		sort_list_3(stack_a);
	else if (size_a == 5 || size_a == 4)
		sort_list_5(stack_a, stack_b);
	else
		algo(stack_a, stack_b);
}

t_list	*ft_befor_last(t_list **stack)
{
	t_list	*head;

	head = *stack;
	while (head->next->next && head)
		head = head->next;
	return (head);
}

long	ft_atol(char *str)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] <= 32 && str[i])
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	return (res * sign);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1)
	{
		create_args(&av, ac, &stack_a);
		if (stack_a == NULL)
		{
			if (ac == 2)
				return (free_split(av, tab_size(av)), 1);
		}
		stack_b = NULL;
		if (already_sort(stack_a))
		{
			if (ac == 2)
				free_split(av, tab_size(av));
			return (ft_free(stack_a), 1);
		}
		push_swap(&stack_a, &stack_b);
		if (ac == 2)
			free_split(av, tab_size(av));
		return (ft_free(stack_a), 0);
	}
}
