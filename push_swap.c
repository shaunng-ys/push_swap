/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 17:48:55 by shaun             #+#    #+#             */
/*   Updated: 2025/05/02 17:49:01 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int				args;
	size_t			i;
	size_t			j;
	char			**strings;
	int				integer;
	t_linkedlist	*stack_a;
	t_linkedlist	*stack_b;
	t_node			*current_a;
	t_node			*current_b;

	args = argc - 1;
	//printf("This is args: %d!\n", args);
	i = 1;
	j = 0;
	integer = 500;
	stack_a = createlinkedlist();
	stack_b = createlinkedlist();
	//Condition being true means there aren't any strings
	if (argc == 1)
		ft_putstr_fd("Error\n", 1);
	else
	{
		while (args)
		{
			//printf("I've entered the while (args) loop!\n");
			if (string_checker(argv[i]) == 1)
			{
				ft_putstr_fd("Error\n", 1);
				return (1);
			}
			else
			{
				//printf("Current string: %s\n", argv[i]);
				strings = ft_split(argv[i], ' ');
				while (strings[j])
				{
					//printf("Current string: %s\n", strings[j]);
					append(stack_a, ft_atoi(strings[j]));
					//append(stack_b, integer++);
					//display_last(list);
					j++;
				}
				printf("This string is okay for sure!\n");
			}
			j = 0;
			args--;
			i++;
		}
		printf("Size of stack_a: %d, Size of stack_b: %d\n", stack_a->size, stack_b->size);
	}
	current_a = stack_a->head;
	while (current_a != NULL)
	{
		printf("%d, %zu\n", current_a->data, current_a->original_pos);
		current_a = current_a->next;
	}
	printf("\n");
	// current_b = stack_b->head;
	// while (current_b != NULL)
	// {
	// 	printf("%d, %zu\n", current_b->data, current_b->original_pos);
	// 	current_b = current_b->next;
	// }
	// printf("Total size of linkedlist: %d\n", stack_a->size);
	if (num_order_check(stack_a) == 1)
	{
		printf("Linkedlist is not yet sorted\n");
	}
	else
		printf("Linkedlist is sorted\n");
	//sa(stack_a);
	// pa(stack_a, stack_b);
	// rr(stack_a, stack_b);
	// rra(stack_a);
	// rrr(stack_a, stack_b);
	if (stack_a->size <= 5)
	{
		sort_small_stack(stack_a, stack_b);
	}
	current_a = stack_a->head;
	while (current_a != NULL)
	{
		printf("%d, %zu\n", current_a->data, current_a->original_pos);
		current_a = current_a->next;
	}
	printf("\nLine break\n\n");
	current_b = stack_b->head;
	while (current_b != NULL)
	{
		printf("%d, %zu\n", current_b->data, current_b->original_pos);
		current_b = current_b->next;
	}
}
