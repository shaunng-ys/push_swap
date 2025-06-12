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
	size_t			original_pos;
	size_t			simple;
	struct s_node	*next;
}	t_node;

typedef struct s_linkedlist
{
	t_node	*head;
	int		size;
}	t_linkedlist;

t_node			*createnode(int data);
t_linkedlist	*createlinkedlist(void);
void			append(t_linkedlist *list, int data);
size_t			string_checker(char *s);
//The display_last function is for personal testing purposes only.
void			display_last(t_linkedlist *list);
//The display_list function is for personal testing purposes only.
void			display_list(t_linkedlist *list);
int				num_order_check(t_linkedlist *list);
t_node			*find_smallest(t_linkedlist *a);
t_node			*find_largest(t_linkedlist *a);
void			push_smallest(t_linkedlist *a, t_linkedlist *b);
void			sort_3(t_linkedlist *a);
void			sort_small_stack(t_linkedlist *a, t_linkedlist *b);
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

#endif