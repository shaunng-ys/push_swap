/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:20:30 by shaun             #+#    #+#             */
/*   Updated: 2025/05/27 13:20:34 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct s_node
{
	int				data;
	int				check;
	int				original_pos;
	int				order;
	int				length;
	char			*binstr;
	struct s_node	*next;
}	t_node;

typedef struct s_linkedlist
{
	t_node	*head;
	int		size;
	int		num_operation;
}	t_linkedlist;

t_node			*createnode(int data);
t_linkedlist	*createlinkedlist(void);
void			append(t_linkedlist *list, int data);
size_t			first_filter(char *s);
size_t			second_filter(char **d_array, int i, size_t counter, long temp);
size_t			string_comb(char **d_array);
size_t			string_checker(char *s);
//The display_last function is for personal testing purposes only.
// void			display_last(t_linkedlist *list);
//The display_list function is for personal testing purposes only.
void			display_list(t_linkedlist *list);
void			display_list_plus(t_linkedlist *list);
int				num_order_check(t_linkedlist *list);
t_node			*find_smallest(t_linkedlist *a);
t_node			*find_largest(t_linkedlist *a);
void			moveup_smallest(t_linkedlist *a, int counter);
void			push_smallest(t_linkedlist *a, t_linkedlist *b);
void			sort_3(t_linkedlist *a);
void			sort_small_stack(t_linkedlist *a, t_linkedlist *b);
void			radix(t_linkedlist *a, t_linkedlist *b, int index, int size);
void			sort_big_stack(t_linkedlist *a, t_linkedlist *b);
void			labeller(t_linkedlist *list);
void			strrev(char *str);
void			fromdeci(char *binstr, int data, int bytes);
int				simplifier(t_linkedlist *list, int bytes);
void			sa(t_linkedlist *stack_a);
void			sb(t_linkedlist *b);
void			ss(t_linkedlist *a, t_linkedlist *b);
int				pa(t_linkedlist *a, t_linkedlist *b);
int				pb(t_linkedlist *a, t_linkedlist *b);
void			ra(t_linkedlist *a);
void			rb(t_linkedlist *b);
void			rr(t_linkedlist *a, t_linkedlist *b);
void			rra(t_linkedlist *a);
void			rrb(t_linkedlist *b);
void			rrr(t_linkedlist *a, t_linkedlist *b);
void			free_binstr(t_linkedlist *a);
void			free_nodes(t_node *head);

#endif