/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalizer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 20:39:53 by shaun             #+#    #+#             */
/*   Updated: 2025/05/03 20:39:55 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
To normalize the data, I need to first label the data with their ascending order
; and to this I'd probably need a function to find the smallest integer (going
through the linkedlist)
*/


//int	current_num;

void	labeller(t_linkedlist *list)
{
	t_node	*current;
	t_node	*smallest_node;
	t_node	*largest_node;
	int		smallest;
	int		pos;

	smallest_node = find_smallest(list);
	largest_node = find_largest(list);
	smallest_node->order = 0;
	pos = 0;
	while (smallest_node != largest_node)
	{
		//ft_printf("This is the current smallest node: %d\n", smallest_node->data);
		smallest_node = find_smallest(list);
		smallest_node->order = ++pos;
	}
}

int	simplifier(t_linkedlist *list, int bytes)
{
	t_node	*current;
	int		temp;
	//int		bytes;
	int		highest;
	//int		loop;

	current = list->head;
	//highest = 0;
	//loop = 0;
	while (current != NULL)
	{
		// bytes = 0;
		// temp = current->order;
		// while (temp > 0)
		// {
		// 	temp = temp / 2;
		// 	bytes++;
		// }
		// if (bytes > highest)
		// 	highest = bytes;
		// ft_printf("This is the number of bytes allocated: %d\n\n", (bytes + 1));
		// current->length = bytes;
		current->binstr = (char*)malloc((bytes * sizeof(char)) + 1);
		if (current->binstr == 0)
		{
			ft_printf("Could not malloc!");
			return (0);
		}
		fromdeci(current->binstr, current->order, bytes);
		current = current->next;
	}
	return (1);
}