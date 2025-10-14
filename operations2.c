/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:24:58 by shaun             #+#    #+#             */
/*   Updated: 2025/10/14 16:25:00 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pa(t_linkedlist *a, t_linkedlist *b)
{
	t_node	*temp1;
	t_node	*temp2;

	if (b->head == NULL)
		return (1);
	else
	{
		temp1 = b->head;
		temp2 = a->head;
		b->head = temp1->next;
		a->head = temp1;
		a->head->next = temp2;
	}
	a->num_operation++;
	ft_printf("pa\n");
	return (0);
}

int	pb(t_linkedlist *a, t_linkedlist *b)
{
	t_node	*temp1;
	t_node	*temp2;

	if (a->head == NULL)
		return (1);
	else
	{
		temp1 = a->head;
		temp2 = b->head;
		a->head = temp1->next;
		b->head = temp1;
		b->head->next = temp2;
	}
	a->num_operation++;
	ft_printf("pb\n");
	return (0);
}

void	ra(t_linkedlist *a)
{
	t_node	*first_node;
	t_node	*second_node;
	t_node	*current;

	first_node = a->head;
	second_node = first_node->next;
	a->head = second_node;
	first_node->next = NULL;
	current = a->head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = first_node;
	a->num_operation++;
	ft_printf("ra\n");
}

void	rb(t_linkedlist *b)
{
	ra(b);
	ft_printf("rb\n");
}
