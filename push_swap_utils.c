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

void	sort_small_stack(t_linkedlist list)
{
	
}

void	sort_big_stack(t_linkedlist list)
{

}