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
	//ft_printf("I've entered here!\n");
	t_node	*current;

	current = list->head;
	// ft_printf("This is a display of the linkedlist:\n");
	while (current->next != NULL)
	{
		ft_printf("%d\n", current->data);
		current = current->next;
	}
	ft_printf("%d\n", current->data);
	ft_printf("\n");
	//ft_printf("Last element: %d\n", current->data);
	//ft_printf("This is the last element in the linked list: %d\n", current->data);
	//ft_putnbr_fd(current->data, 1);
	//ft_putchar_fd('\n', 1);
	//ft_printf("Last element: %d\n", current->data);
}

void	display_list_plus(t_linkedlist *list)
{
	//ft_printf("I've entered here!\n");
	t_node	*current;

	current = list->head;
	// ft_printf("This is a display of the linkedlist:\n");
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
	//ft_printf("\n");
	//ft_printf("Last element: %d\n", current->data);
	//ft_printf("This is the last element in the linked list: %d\n", current->data);
	//ft_putnbr_fd(current->data, 1);
	//ft_putchar_fd('\n', 1);
	//ft_printf("Last element: %d\n", current->data);
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
	// ft_printf("This is the smallest integer in the linkedlist: %d\n", smallest->data);
	while (current != NULL && current != smallest)
	{
		current = current->next;
		counter++;
	}
	if (counter == 1)
		counter = 1;
		//pb(a, b);
	else if (counter == 2)
		sa(a);
	else if (counter == 3)
	{	ra(a);
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
	/*
	while loop here is necessary in the case where the head node number 
	is smaller then the remaining smallest numbers(unchecked)
	i.e. check value is already == 1
	E.g. sequence: 
	(check value in parentheses): 6(1) 5(1) 3(1) 2(1) 1(1) 7(0)
	In this above scenario, the smallest_num given the initial
	initialisation is 6, and even though it has been checked(1),
	after going through the while loop, what is returned will still be 6.
	*/
	while (current->check == 1)
		current = current->next;
	smallest_num = current->data;
	smallest = current;
	//ft_printf("This is currently at the top of the list: %d\n", smallest_num);
	while (current != NULL)
	{
		//ft_printf("I've entered the loop\n");
		if ((smallest_num > current->data) && (current->check == 0))
		{
			//ft_printf("Current check value is: %d\n", current->check);
			smallest_num = current->data;
			//ft_printf("This is the updated smallest number: %d\n", smallest_num);
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
	//ft_printf("This is currently the top of the list: %d\n", largest_num);
	while (current->next != NULL)
	{
		//ft_printf("I've entered the loop\n");
		if (largest_num < current->data)
		{
			largest_num = current->data;
			//ft_printf("This is the updated largest number: %d\n", largest_num);
			largest = current;
		}
		current = current->next;
	}
	if (largest_num < current->data)
	{
		largest_num = current->data;
		largest = current;
	}
	//ft_printf("This is the largest number at the end: %d\n", largest->data);
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
	// {1, 3, 2}
	// ft_printf("This is the smallest int: %d\n", smallest->data);
	// ft_printf("This is the largest int: %d\n", largest->data);
	if (current == smallest && current->next == largest)
	{
		//ft_printf("Scenario 1: {1, 3, 2}\n");
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
	{
		//ft_printf("Scenario 2: {3, 1, 2}\n");
		ra(a);
	}
	// {3, 2, 1}
	else if (current == largest && current->next != smallest)
	{
		//ft_printf("Scenario 3: {3, 2, 1}\n");
		ra(a);
		sa(a);
	}
	// {2, 3, 1}
	else if (current->next == largest)
	{
		//ft_printf("Scenario 4: {2, 3, 1}\n");
		rra(a);
	}
	// {2, 1, 3}
	else if (current->next == smallest)
	{
		//ft_printf("Scenario 5: {2, 1, 3}\n");
		sa(a);
	}
}

void	sort_small_stack(t_linkedlist *a, t_linkedlist *b)
{
	if (a->size == 5)
	{
		//find_smallest(a);
		//display_list(a);
		push_smallest(a, b);
		//display_list(a);
		//find_smallest(a);
		push_smallest(a, b);
		// display_list(a);
		sort_3(a);
		// display_list(a);
		pa(a, b);
		// display_list(a);
		pa(a, b);
		// display_list(a);
	}
	else if (a->size == 4)
	{
		//find_smallest(a);
		push_smallest(a, b);
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

// , int subtract)
void	radix(t_linkedlist *a, t_linkedlist *b, int index, int size)
{
	t_node	*current_a;
	t_node	*current_b;
	//int		index;

	current_a = a->head;
	/*
	Seems likely that I will have to pad numbers with zeroes in front
	meaning I will have to malloc every binstr with the same num of bytes
	as that of the longest binstr
	*/
	while (size > 0)
	{
		//index = current_a->length - 1 - subtract;
		// if (index > 0) &&
		if (current_a->binstr[index] == '0')
		{
			pb(a, b);
		}
		else if (current_a->binstr[index] == '1')
			ra(a);
		size--;
		current_a = a->head;
		// current_a = current_a->next;
	}
	// while (current_a != NULL)
	// {
	// 	//index = current_a->length - 1 - subtract;
	// 	// if (index > 0) &&
	// 	if (current_a->binstr[index] == '0')
	// 	{
	// 		pb(a, b);
	// 	}
	// 	else if (current_a->binstr[index] == '1')
	// 		ra(a);
	// 	current_a = a->head;
	// 	// current_a = current_a->next;
	// }
	ft_printf("The following is in stack a\n");
	display_list_plus(a);
	ft_printf("\n");
	ft_printf("The following is in stack b\n");
	display_list_plus(b);
	current_b = b->head;
	while (current_b != NULL)
	{
		pa(a, b);
		current_b = b->head;
		// current_b = current_b->next;
	}
	ft_printf("This is the end result of the last iteration\n");
	display_list_plus(a);
}

void	sort_big_stack(t_linkedlist *a, t_linkedlist *b)
{
	t_node	*current;
	int		biggest;
	int		max_length;
	int		index;
	//int		subtract;
	int		iter;
	char	*binstr;

	ft_printf("This is the number of integers inputted: %d\n", a->size);
	biggest = a->size;
	max_length = 0;
	while (biggest > 0)
	{
		biggest = biggest / 2;
		max_length++;
	}
	biggest = a->size;
	ft_printf("This is the max_length: %d\n", max_length);
	simplifier(a, max_length);
	index = max_length - 1;
	display_list_plus(a);
	//radix(a, b, index, biggest);
	
	while (index >= 0)
	{
		radix(a, b, index, biggest);
		ft_printf("\nThis is index now: %d\n", index);
		index--;
		display_list_plus(a);
	}

	// if ((max_length - subtract) < 1)
	// {
	// 	current = current->next;
	// }
	// current = a->head;
	// while (current != NULL)
	// {
	// 	current = current->next;
	// }
	// subtract++;
}