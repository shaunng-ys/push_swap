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

#include "push_swap.h"
/*
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
*/

/*
typedef struct	Node
{
	int	data;
	size_t	original_pos;
	size_t	simple;
	struct Node	*next;
} Node;

typedef struct	LinkedList
{
	Node	*head;
	int		size;
} LinkedList;
*/

t_node	*createnode(int data)
{
	t_node	*newnode;

	newnode = (t_node *)malloc(sizeof(t_node));
	if (newnode == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
	newnode->data = data;
	newnode->next = NULL;
	return (newnode);
}

t_linkedlist	*createlinkedlist(void)
{
	t_linkedlist	*list;

	list = (t_linkedlist *)malloc(sizeof(t_linkedlist));

	if (list == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
	list->head = NULL;
	list->size = 0;
	return (list);
}

/*
This function creates a new node with the value the user puts in and
attaches it to the end of a linked list (user passes the pointer to
the linked list)
*/
void	append(t_linkedlist *list, int data)
{
	t_node			*newnode;
	t_node			*current;

	newnode = createnode(data);
	current = list->head;
	if (list->head == NULL)
	/*
	I think I should be able to use a different condition here
	as well: if (list->size = 0), not important, just a thought hehe
	*/
		list->head = newnode;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = newnode;
	}
	list->size = list->size + 1;
}
