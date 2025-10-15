/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:30:53 by shaun             #+#    #+#             */
/*   Updated: 2025/05/27 15:30:57 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
The display_last function below displays the last element in the linked list.
This is for personal testing purposes. Cannot be used for submission.
*/

void	display_list(t_linkedlist *list)
{
	t_node	*current;

	current = list->head;
	while (current->next != NULL)
	{
		ft_printf("%d\n", current->data);
		current = current->next;
	}
	ft_printf("%d\n", current->data);
	ft_printf("\n");
}

void	display_list_plus(t_linkedlist *list)
{
	t_node	*current;

	current = list->head;
	while (current->next != NULL)
	{
		ft_printf("Data: %d\n", current->data);
		ft_printf("Original Pos: %d\n", current->original_pos);
		ft_printf("Order: %d\n", current->order);
		ft_printf("Binary string equivalent: %s\n\n", current->binstr);
		current = current->next;
	}
	ft_printf("Data: %d\n", current->data);
	ft_printf("Original Pos: %d\n", current->original_pos);
	ft_printf("Order: %d\n", current->order);
	ft_printf("Binary string equivalent: %s\n\n", current->binstr);
}

int	num_order_check(t_linkedlist *list)
{
	t_node	*current;

	if (!list)
		return (1);
	current = list->head;
	while (current->next != NULL)
	{
		if (current->data >= current->next->data)
			return (1);
		current = current->next;
	}
	return (0);
}

void	moveup_smallest(t_linkedlist *a, int counter)
{
	if (counter == 1)
		counter = 1;
	else if (counter == 2)
		sa(a);
	else if (counter == 3)
	{
		ra(a);
		ra(a);
	}
	else if (counter == 4)
	{
		ra(a);
		ra(a);
		ra(a);
	}
	else if (counter == 5)
		rra(a);
}

void	push_smallest(t_linkedlist *a, t_linkedlist *b)
{
	t_node	*smallest;
	t_node	*current;
	int		counter;

	counter = 1;
	current = a->head;
	smallest = find_smallest(a);
	while (current != NULL && current != smallest)
	{
		current = current->next;
		counter++;
	}
	moveup_smallest(a, counter);
	pb(a, b);
}
