/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 22:32:42 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/16 16:39:44 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	only_num(char *c)
{
	int	i;

	i = 0;
	if (c[i] == '-' || c[i] == '+')
		i++;
	if (c[i] == '\0')
		return (0);
	while (c[i] != '\0')
	{
		if ((c[i] >= '0' && c[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_doublon(t_list *stack_a, long nb)
{
	while (stack_a)
	{
		if (stack_a->content == nb)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	check_long(long long nb)
{
	if (nb >= -2147483648 && nb <= 2147483647)
		return (1);
	return (0);
}

int	already_sort(t_list *stack_a)
{
	if (!stack_a || !stack_a->next)
		return (1);
	while (stack_a->next)
	{
		if (stack_a->content > stack_a->next->content)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}
