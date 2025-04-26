/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 21:11:45 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/16 18:06:43 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*out;

	if (size > 0)
		if (MAX_INT / size < nmemb)
			return (NULL);
	out = malloc(nmemb * size);
	if (!out)
		return (NULL);
	ft_bzero(out, nmemb * size);
	return (out);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

int	tab_size(char **tab)
{
	int	j;

	j = 0;
	if (!tab)
		return (0);
	while (tab[j] != NULL)
		j++;
	return (j);
}

void	create_args(char ***av, int ac, t_list **stack_a)
{
	t_list	*tmp;
	long	t;
	int		i;

	i = 0;
	tmp = NULL;
	if (ac == 2)
	{
		split_args(av, &ac, &i);
		if (!*av)
			return ;
	}
	while (++i < ac)
	{
		t = ft_atol((*av)[i]);
		if (only_num((*av)[i]) && (check_long(t)) && ft_doublon((*stack_a), t))
		{
			tmp = ft_lstnew(t);
			if (!tmp)
				ft_free_creat_args(stack_a);
			ft_lstadd_back(stack_a, tmp);
		}
		else
			return (ft_free_creat_args(stack_a), error_write());
	}
}

void	split_args(char ***av, int *ac, int *i)
{
	*av = ft_split((*av)[1], ' ');
	if (!*av)
		return ;
	*ac = tab_size((*av));
	*i = -1;
}
