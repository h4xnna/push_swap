/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:38:12 by hmimouni          #+#    #+#             */
/*   Updated: 2025/04/16 18:11:53 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_INT 2147483647
# define MIN_INT -2147483648

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "printf/ft_printf.h"

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}					t_list;

// utils
t_list	*ft_lstnew(int content);
int		ft_lst_size(t_list *lst);
t_list	*ft_lst_last(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);

// main
void	ft_printf_list(t_list *lst);
void	swap(int *a, int *b);
t_list	*ft_befor_last(t_list **stack);

// check_args
int		check_long(long long nb);
int		only_num(char *c);
int		ft_strlen(char *str);
int		ft_doublon(t_list *stack_a, long nb);
int		already_sort(t_list *stack_a);

// check_arg2
int		word_lenght(char const *s, char c);
int		get_out_lenght(char const *s, char c);
char	*special_strdup(char const *s, char c, int *outi);
void	free_split(char **out, int i);
char	**ft_split(char const *s, char c);

// check_arg3
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
int		tab_size(char **tab);
void	create_args(char ***av, int ac, t_list **stack_a);
long	ft_atol(char *str);
void	split_args(char ***av, int *ac, int *i);
void	error_write(void);

// sort_list2
void	sort_list_2(t_list **stack_b);

// sort_list3
void	sort_list_3(t_list **stack_a);
void	middle(t_list **stack_a);

// sort_list5
void	sort_list_5(t_list **stack_a, t_list **stack_b);
int		min(t_list *stack_a);
void	push_top(t_list *elem, t_list **stack_a);
t_list	*search(int k, t_list *stack_a);

// algo2
int		max(t_list *stack_a);
void	push_top_int_b(int content, t_list **stack_b);
int		simulation_push_top_int(int content, t_list *stack_a);
void	push_top_int_a(int content, t_list **stack_a);
int		bigest(t_list *stack_b, int content);

// algo
void	algo(t_list **stack_a, t_list **stack_b);
int		deep(int content, t_list *stack_a);
int		bestmoove(t_list *stack_a, t_list *stack_b);

// error
void	ft_free(t_list *stack_a);
int		lower(t_list *stack_b, int content);
void	ft_free_creat_args(t_list **stack_a);
void	push_swap(t_list **stack_a, t_list **stack_b);

// sa
void	swap(int *a, int *b);
void	swap_a(t_list **list);

// sb
void	swap_b(t_list **stack_b);

// pb
void	push_b(t_list **stack_a, t_list **stack_b);

// ss
void	swap_ab(t_list **stack_b, t_list **stack_a);

// pa
void	push_a(t_list **stack_b, t_list **stack_a);

// ra
void	rotate_a(t_list **stack_a);

// rb
void	rotate_b(t_list **stack_b);

// rr
void	rotate_a_b(t_list **stack_a, t_list **stack_b);

// rra
void	reverse_rotate_a(t_list **stack_a);

// rrb
void	reverse_rotate_b(t_list **stack_b);

#endif