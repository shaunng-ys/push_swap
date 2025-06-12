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
void	display_last(t_linkedlist *list)
{
	//printf("I've entered here!\n");
	t_node	*current;

	current = list->head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	printf("Last element: %d\n", current->data);
	//printf("This is the last element in the linked list: %d\n", current->data);
	//ft_putnbr_fd(current->data, 1);
	//ft_putchar_fd('\n', 1);
	//printf("Last element: %d\n", current->data);
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

void	push_smallest(t_linkedlist *a, t_linkedlist *b, t_node *smallest)
{
	t_node	*smallest;
	t_node	*current;
	int		counter;

	counter = 1;
	current = a->head;
	find_smallest(a);
	while (current != NULL && current != smallest)
	{
		current = current->next;
		counter++;
	}
	if (counter = 1)
		pb(a, b);
	else if (counter = 2)
		sa(a);
	else if (counter = 3)
	{	ra(a);
		ra(a);
	}
	else if (counter = 4)
	{
		rra(a);
		rra(a);
	}
	else if (counter = 5)
		rra(a);
	pb(a, b);
}

t_node	*find_smallest(t_linkedlist *a)
{
	t_node	*current;
	t_node	*smallest;
	int		smallest_num;

	current = a->head;
	smallest_num = current->data;
	while (current != NULL)
	{
		if (smallest_num > current->data)
		{
			smallest_num = current->data;
			smallest = current;
		}
		current = current->next;
	}
	return (smallest);
}

t_node	*find_largest(t_linkedlist *a)
{
	t_node	*current;
	t_node	*largest;
	int		largest_num;

	current = a->head;
	largest_num = current->data;
	while (current != NULL)
	{
		if (largest_num < current->data)
		{
			largest_num = current->data;
			largest = current;
		}
		current = current->next;
	}
	return (largest);
}

void	sort_3(t_linkedlist *a)
{
	t_node	*current;
	t_node	*smallest;
	t_node	*largest;

	current = a->head;
	// {1, 3, 2}
	if (current == smallest && current->next == largest)
	{
		rra(a);
		sa(a);
	}
	// In the instance below, the stack of 3 is already sorted so I just have to push the ints in b back to a 
	// {1, 2, 3}
	// else if (current == smallest && current->next != largest)
	// {
	// }
	
	// {3, 1, 2}
	else if (current == largest && current->next == smallest)
		ra(a);
	// {3, 2, 1}
	else if (current == largest && current->next != smallest)
	{
		ra(a);
		sa(a);
	}
	// {2, 3, 1}
	else if (current->next == largest)
		rra(a);
	// {2, 1, 3}
	else if (current->next == smallest)
		sa(a);
}

void	sort_small_stack(t_linkedlist *a, t_linkedlist *b, t_node *smallest)
{
	if (a->size == 5)
	{
		//find_smallest(a);
		push_smallest(a, b, smallest);
		//find_smallest(a);
		push_smallest(a, b, smallest);
		sort_3(a);
		pa(a, b);
		pa(a, b);
	}
	else if (a->size == 4)
	{
		//find_smallest(a);
		push_smallest(a, b, smallest);
		sort_3(a);
		pa(a, b);
	}
	else if (a->size == 3)
		sort_3(a);
	else if (a->size == 2)
		sa(a);
	/*
	For the sort_small_stack algorithm (for 5 integers and below, if there are 5 then push the
	2 smallest integers over to stack b, push the smallest, then push the smallest after the
	1st push), afterwards, the remaining 3 integers have a very limited number of combinations
	so they can be hard coded
	*/
}

void	sort_big_stack(t_linkedlist list)
{

}