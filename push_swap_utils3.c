/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:45:28 by shaun             #+#    #+#             */
/*   Updated: 2025/10/14 16:45:29 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big_stack(t_linkedlist *a, t_linkedlist *b)
{
	t_node	*current;
	int		biggest;
	int		max_length;
	int		index;
	char	*binstr;

	biggest = a->size;
	max_length = 0;
	while (biggest > 0)
	{
		biggest = biggest / 2;
		max_length++;
	}
	biggest = a->size;
	simplifier(a, max_length);
	index = max_length - 1;
	while (index >= 0)
	{
		radix(a, b, index, biggest);
		index--;
	}
}

void	free_binstr(t_linkedlist *a)
{
	t_node	*current;

	current = a->head;
	while (current != NULL)
	{
		free(current->binstr);
		current = current->next;
	}
}

void	free_nodes(t_node *head)
{
	t_node	*temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
