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

void	sort_small_stack(t_linkedlist *list)
{
	t_node	*current;
	t_node	*smallest;
	int		smallest_num;

	current = list->head;
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

	while ()
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