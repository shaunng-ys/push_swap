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

//sa (swap a): If there are 2 numbers, swap the first 2 elements at the top of the stack a.
void	sa(t_linkedlist *stack_a)
{
	/*
	Using stack a containing {1, 2, 3, 4}
	*/
	t_node	*first_node;
	t_node	*second_node;
	t_node	*third_node;

	first_node = stack_a->head; //i.e. node 1 is pointing to "1"
	second_node = stack_a->head->next; //could also write ... = current1->next; ? //i.e. node 2 is pointing to "2"
	third_node = second_node->next;
	stack_a->head = second_node; //stack a's head is now pointing to "2" instead of "1"
	stack_a->head->next = first_node; //the node pointing to "2" is now pointing to "1" throught the "next" pointer
	// current2 = stack_a->head->next;
	// current2->next = current1;
	first_node->next = third_node;
	/*
	first_node = second_node->next; //current1 now reflects the address of the third integer in the stack
	second_node = stack_a->head->next;
	second_node->next = first_node;
	*/
}
//sb (swap b ) :  If there are 2 numbers, swap the first 2 elements at the top of the stack b.
void	sb(t_linkedlist *b)
{
	sa(b);
}
//ss : sa and sb at the same time.
void	ss(t_linkedlist *a, t_linkedlist *b)
{
	sa(a);
	sa(b);
}

//pa (push a): If b is not empty it takes the first element on top of b and puts it on a.
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
	return (0);
}

// pb (push b): If a is not empty, it takes the first element on top of a and puts it on b.
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
	return (0);
}
// int	pb(t_linkedlist *b)
// {
// 	pa(b);
// }

// ra (rotate a): Shifts all the elements of the stack a up by one position. The first element becomes the last.
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
}

// rb (rotate b) : Shifts all the elements of the stack b one position upwards. The first element becomes the last one. 
void	rb(t_linkedlist *b)
{
	ra(b);
}

// rr : ra and rb at the same time. 
void	rr(t_linkedlist *a, t_linkedlist *b)
{
	ra(a);
	ra(b);
}

// rra (reverse rotate a): Shifts all elements of the stack down one position. the stack a. The last element becomes the first. 

// rrb (reverse rotate b): Shifts all the elements of the stack b one position downwards. the stack b. The last element becomes the first. 

// rrr : rra and rrb at the same time