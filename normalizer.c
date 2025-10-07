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
	smallest_node->order = 1;
	pos = 1;
	while (smallest_node != largest_node)
	{
		//printf("This is the current smallest node: %d\n", smallest_node->data);
		smallest_node = find_smallest(list);
		smallest_node->order = ++pos;
	}
}
