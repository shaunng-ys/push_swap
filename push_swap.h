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
int				num_order_check(t_linkedlist *list);
void			sa(t_linkedlist *stack_a);
void			sb(t_linkedlist *b);
int				pa(t_linkedlist *a, t_linkedlist *b);

#endif