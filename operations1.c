/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:58:32 by shaun             #+#    #+#             */
/*   Updated: 2025/06/02 16:58:34 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_linkedlist *stack_a)
{
	t_node	*first_node;
	t_node	*second_node;
	t_node	*third_node;

	first_node = stack_a->head;
	second_node = stack_a->head->next;
	third_node = second_node->next;
	stack_a->head = second_node;
	stack_a->head->next = first_node;
	first_node->next = third_node;
	stack_a->num_operation++;
	ft_printf("sa\n");
}

void	sb(t_linkedlist *b)
{
	sa(b);
	b->num_operation++;
	ft_printf("sb\n");
}

void	ss(t_linkedlist *a, t_linkedlist *b)
{
	sa(a);
	sa(b);
	b->num_operation--;
	ft_printf("ss\n");
}

// int	pa(t_linkedlist *a, t_linkedlist *b)
// {
// 	t_node	*temp1;
// 	t_node	*temp2;

// 	if (b->head == NULL)
// 		return (1);
// 	else
// 	{
// 		temp1 = b->head;
// 		temp2 = a->head;
// 		b->head = temp1->next;
// 		a->head = temp1;
// 		a->head->next = temp2;
// 	}
// 	a->num_operation++;
// 	ft_printf("pa\n");
// 	return (0);
// }

// int	pb(t_linkedlist *a, t_linkedlist *b)
// {
// 	t_node	*temp1;
// 	t_node	*temp2;

// 	if (a->head == NULL)
// 		return (1);
// 	else
// 	{
// 		temp1 = a->head;
// 		temp2 = b->head;
// 		a->head = temp1->next;
// 		b->head = temp1;
// 		b->head->next = temp2;
// 	}
// 	a->num_operation++;
// 	ft_printf("pb\n");
// 	return (0);
// }

// void	ra(t_linkedlist *a)
// {
// 	t_node	*first_node;
// 	t_node	*second_node;
// 	t_node	*current;

// 	first_node = a->head;
// 	second_node = first_node->next;
// 	a->head = second_node;
// 	first_node->next = NULL;
// 	current = a->head;
// 	while (current->next != NULL)
// 	{
// 		current = current->next;
// 	}
// 	current->next = first_node;
// 	a->num_operation++;
// 	ft_printf("ra\n");
// }

// void	rb(t_linkedlist *b)
// {
// 	ra(b);
// 	ft_printf("rb\n");
// }

// void	rr(t_linkedlist *a, t_linkedlist *b)
// {
// 	ra(a);
// 	ra(b);
// 	ft_printf("rr\n");
// }

// void	rra(t_linkedlist *a)
// {
// 	t_node	*last_node;
// 	t_node	*second_last_node;
// 	t_node	*first_node;
// 	t_node	*current;

// 	first_node = a->head;
// 	current = a->head;
// 	while (current->next->next != NULL)
// 	{
// 		current = current->next;
// 	}
// 	second_last_node = current;
// 	last_node = current->next;
// 	second_last_node->next = NULL;
// 	a->head = last_node;
// 	a->head->next = first_node;
// 	a->num_operation++;
// 	ft_printf("rra\n");
// }

// void	rrb(t_linkedlist *b)
// {
// 	rra(b);
// 	b->num_operation++;
// 	ft_printf("rrb\n");
// }

// void	rrr(t_linkedlist *a, t_linkedlist *b)
// {
// 	rra(a);
// 	rra(b);
// 	b->num_operation--;
// 	ft_printf("rrr\n");
// }