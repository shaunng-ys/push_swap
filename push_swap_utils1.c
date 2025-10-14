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

	current = list->head;
	while (current->next != NULL)
	{
		if (current->data >= current->next->data)
			return (1);
		current = current->next;
	}
	return (0);
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
	pb(a, b);
}

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

// t_node	*find_largest(t_linkedlist *a)
// {
// 	t_node	*current;
// 	t_node	*largest;
// 	int		largest_num;

// 	current = a->head;
// 	largest_num = current->data;
// 	largest = current;
// 	while (current->next != NULL)
// 	{
// 		if (largest_num < current->data)
// 		{
// 			largest_num = current->data;
// 			largest = current;
// 		}
// 		current = current->next;
// 	}
// 	if (largest_num < current->data)
// 	{
// 		largest_num = current->data;
// 		largest = current;
// 	}
// 	return (largest);
// }

// void	sort_3(t_linkedlist *a)
// {
// 	t_node	*current;
// 	t_node	*smallest;
// 	t_node	*largest;

// 	current = a->head;
// 	smallest = find_smallest(a);
// 	largest = find_largest(a);
// 	if (current == smallest && current->next == largest)
// 	{
// 		rra(a);
// 		sa(a);
// 	}
// 	else if (current == largest && current->next == smallest)
// 	{
// 		ra(a);
// 	}
// 	else if (current == largest && current->next != smallest)
// 	{
// 		ra(a);
// 		sa(a);
// 	}
// 	else if (current->next == largest)
// 	{
// 		rra(a);
// 	}
// 	else if (current->next == smallest)
// 	{
// 		sa(a);
// 	}
// }

// void	sort_small_stack(t_linkedlist *a, t_linkedlist *b)
// {
// 	if (a->size == 5)
// 	{
// 		push_smallest(a, b);
// 		push_smallest(a, b);
// 		sort_3(a);
// 		pa(a, b);
// 		pa(a, b);
// 	}
// 	else if (a->size == 4)
// 	{
// 		push_smallest(a, b);
// 		sort_3(a);
// 		pa(a, b);
// 	}
// 	else if (a->size == 3)
// 		sort_3(a);
// 	else if (a->size == 2)
// 		sa(a);
// }

// void	radix(t_linkedlist *a, t_linkedlist *b, int index, int size)
// {
// 	t_node	*current_a;
// 	t_node	*current_b;

// 	current_a = a->head;
// 	while (size > 0)
// 	{
// 		if (current_a->binstr[index] == '0')
// 		{
// 			pb(a, b);
// 		}
// 		else if (current_a->binstr[index] == '1')
// 			ra(a);
// 		size--;
// 		current_a = a->head;
// 	}
// 	current_b = b->head;
// 	while (current_b != NULL)
// 	{
// 		pa(a, b);
// 		current_b = b->head;
// 	}
// }

// void	sort_big_stack(t_linkedlist *a, t_linkedlist *b)
// {
// 	t_node	*current;
// 	int		biggest;
// 	int		max_length;
// 	int		index;
// 	char	*binstr;

// 	ft_printf("This is the number of integers inputted: %d\n", a->size);
// 	biggest = a->size;
// 	max_length = 0;
// 	while (biggest > 0)
// 	{
// 		biggest = biggest / 2;
// 		max_length++;
// 	}
// 	biggest = a->size;
// 	ft_printf("This is the max_length: %d\n", max_length);
// 	simplifier(a, max_length);
// 	index = max_length - 1;
// 	display_list_plus(a);
// 	while (index >= 0)
// 	{
// 		radix(a, b, index, biggest);
// 		ft_printf("\nThis is index now: %d\n", index);
// 		index--;
// 	}
// }

// void	free_binstr(t_linkedlist *a)
// {
// 	t_node	*current;

// 	current = a->head;
// 	while (current != NULL)
// 	{
// 		free(current->binstr);
// 		current = current->next;
// 	}
// }

// void	free_nodes(t_node *head)
// {
// 	t_node	*temp;

// 	while (head != NULL)
// 	{
// 		temp = head;
// 		head = head->next;
// 		free(temp);
// 	}
// }