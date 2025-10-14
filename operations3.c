/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:25:05 by shaun             #+#    #+#             */
/*   Updated: 2025/10/14 16:25:07 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_linkedlist *a, t_linkedlist *b)
{
	ra(a);
	ra(b);
	ft_printf("rr\n");
}

void	rra(t_linkedlist *a)
{
	t_node	*last_node;
	t_node	*second_last_node;
	t_node	*first_node;
	t_node	*current;

	first_node = a->head;
	current = a->head;
	while (current->next->next != NULL)
	{
		current = current->next;
	}
	second_last_node = current;
	last_node = current->next;
	second_last_node->next = NULL;
	a->head = last_node;
	a->head->next = first_node;
	a->num_operation++;
	ft_printf("rra\n");
}

void	rrb(t_linkedlist *b)
{
	rra(b);
	b->num_operation++;
	ft_printf("rrb\n");
}

void	rrr(t_linkedlist *a, t_linkedlist *b)
{
	rra(a);
	rra(b);
	b->num_operation--;
	ft_printf("rrr\n");
}
