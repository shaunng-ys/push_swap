/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:45:22 by shaun             #+#    #+#             */
/*   Updated: 2025/10/14 16:45:23 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_smallest(t_linkedlist *a)
{
	t_node	*current;
	t_node	*smallest;
	int		smallest_num;

	current = a->head;
	while (current->check == 1)
		current = current->next;
	smallest_num = current->data;
	smallest = current;
	while (current != NULL)
	{
		if ((smallest_num > current->data) && (current->check == 0))
		{
			smallest_num = current->data;
			smallest = current;
		}
		current = current->next;
	}
	smallest->check = 1;
	return (smallest);
}

t_node	*find_largest(t_linkedlist *a)
{
	t_node	*current;
	t_node	*largest;
	int		largest_num;

	current = a->head;
	largest_num = current->data;
	largest = current;
	while (current->next != NULL)
	{
		if (largest_num < current->data)
		{
			largest_num = current->data;
			largest = current;
		}
		current = current->next;
	}
	if (largest_num < current->data)
	{
		largest_num = current->data;
		largest = current;
	}
	return (largest);
}

void	sort_3(t_linkedlist *a)
{
	t_node	*current;
	t_node	*smallest;
	t_node	*largest;

	current = a->head;
	smallest = find_smallest(a);
	largest = find_largest(a);
	if (current == smallest && current->next == largest)
	{
		rra(a);
		sa(a);
	}
	else if (current == largest && current->next == smallest)
		ra(a);
	else if (current == largest && current->next != smallest)
	{
		ra(a);
		sa(a);
	}
	else if (current->next == largest)
		rra(a);
	else if (current->next == smallest)
		sa(a);
}

void	sort_small_stack(t_linkedlist *a, t_linkedlist *b)
{
	if (a->size == 5)
	{
		push_smallest(a, b);
		push_smallest(a, b);
		sort_3(a);
		pa(a, b);
		pa(a, b);
	}
	else if (a->size == 4)
	{
		push_smallest(a, b);
		sort_3(a);
		pa(a, b);
	}
	else if (a->size == 3)
		sort_3(a);
	else if (a->size == 2)
		sa(a);
}

void	radix(t_linkedlist *a, t_linkedlist *b, int index, int size)
{
	t_node	*current_a;
	t_node	*current_b;

	current_a = a->head;
	while (size > 0)
	{
		if (current_a->binstr[index] == '0')
		{
			pb(a, b);
		}
		else if (current_a->binstr[index] == '1')
			ra(a);
		size--;
		current_a = a->head;
	}
	current_b = b->head;
	while (current_b != NULL)
	{
		pa(a, b);
		current_b = b->head;
	}
}
