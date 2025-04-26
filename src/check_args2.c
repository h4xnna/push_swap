/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 21:07:54 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/16 15:27:21 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	word_lenght(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

int	get_out_lenght(char const *s, char c)
{
	int	out;
	int	i;

	i = 0;
	out = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			out++;
			i += word_lenght(s + i, c);
		}
		else
			i++;
	}
	return (out);
}

char	*special_strdup(char const *s, char c, int *outi)
{
	char	*out;
	int		i;

	out = ft_calloc(word_lenght(s, c) + 1, sizeof(char));
	if (out)
	{
		i = 0;
		while (s[i] != c && s[i])
		{
			out[i] = s[i];
			i++;
		}
		*outi += word_lenght(s, c);
	}
	else
		return (NULL);
	return (out);
}

void	free_split(char **out, int i)
{
	while (i >= 0)
	{
		free(out[i]);
		i--;
	}
	free(out);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		i;
	int		j;

	out = ft_calloc(get_out_lenght(s, c) + 1, sizeof(char *));
	if (!out)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			out[j] = special_strdup(s + i, c, &i);
			if (!out[j])
			{
				free_split(out, j);
				return (NULL);
			}
			j++;
		}
		else
			i++;
	}
	return (out);
}
