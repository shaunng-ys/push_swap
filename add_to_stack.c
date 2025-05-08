/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:27:04 by shaun             #+#    #+#             */
/*   Updated: 2025/05/06 20:27:05 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.a"

struct	node
{
	int data;
	struct node *previous;
	struct node *next;
};

Node*	addNode (Node *current, int value)
{
	Node *newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL)
		return (0);
	newNode->data = value;
	newNode->previous = current;
	newNode->next = NULL;
	return (newNode);
}
