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
	//ft_printf("This is args: %d!\n", args);
	i = 1;
	j = 0;
	integer = 500;
	stack_a = createlinkedlist();
	stack_b = createlinkedlist();
	//Condition being true means there aren't any strings
	if (argc == 1)
	{
		ft_putstr_fd("Error\n", 1);
		return (1);
	}
	else
	{
		while (args)
		{
			//ft_printf("I've entered the while (args) loop!\n");
			if (string_checker(argv[i]) == 1)
			{
				ft_putstr_fd("Error\n", 1);
				return (1);
			}
			else
			{
				//ft_printf("Current string: %s\n", argv[i]);
				strings = ft_split(argv[i], ' ');
				while (strings[j])
				{
					//ft_printf("Current string: %s\n", strings[j]);
					append(stack_a, ft_atoi(strings[j]));
					free(strings[j]);
					//append(stack_b, integer++);
					//display_last(list);
					j++;
				}
				free(strings);
				//ft_printf("This string is okay for sure!\n");
			}
			j = 0;
			args--;
			i++;
		}
		ft_printf("Size of stack_a: %d, Size of stack_b: %d\n\n", stack_a->size, stack_b->size);
	}
	ft_printf("These are the integers in stack a:\n");
	display_list(stack_a);
	// current_a = stack_a->head;
	// while (current_a != NULL)
	// {
	// 	// ft_printf("%d, %zu\n", current_a->data, current_a->original_pos);
	// 	ft_printf("%d\n", current_a->data);
	// 	current_a = current_a->next;
	// }
	//ft_printf("\n");
	// current_b = stack_b->head;
	// while (current_b != NULL)
	// {
	// 	ft_printf("%d, %zu\n", current_b->data, current_b->original_pos);
	// 	current_b = current_b->next;
	// }
	// ft_printf("Total size of linkedlist: %d\n", stack_a->size);
	if (num_order_check(stack_a) == 1)
	{
		ft_printf("Hmm...it seems the stack has not been sorted\n\n");
	}
	else
		ft_printf("Delightful, the stack is already sorted\n\n");
	//sa(stack_a);
	// pa(stack_a, stack_b);
	// rr(stack_a, stack_b);
	// rra(stack_a);
	// rrr(stack_a, stack_b);
	if (stack_a->size <= 5)
	{
		stack_a->num_operation = 0;
		stack_b->num_operation = 0;
		sort_small_stack(stack_a, stack_b);
		ft_printf("We've done some work! Let's check again to see if the stack has been sorted\n\n");
		display_list(stack_a);
	}
	if (stack_a->size > 5)
	{
		stack_a->num_operation = 0;
		stack_b->num_operation = 0;
		labeller(stack_a);
		//simplifier(stack_a);
		// display_list_plus(stack_a);
		sort_big_stack(stack_a, stack_b);
		// free_binstr(stack_a);
		free_nodes(stack_a->head);
		// free(stack_a);
		// free(stack_b);
		//display_list_plus(stack_a);
	}
	// current_a = stack_a->head;
	// while (current_a != NULL)
	// {
	// 	// ft_printf("%d, %zu\n", current_a->data, current_a->original_pos);
	// 	ft_printf("%d\n", current_a->data);
	// 	current_a = current_a->next;
	// }
	// ft_printf("\nLine break\n\n");
	// current_b = stack_b->head;
	// while (current_b != NULL)
	// {
	// 	// ft_printf("%d, %zu\n", current_b->data, current_b->original_pos);
	// 	ft_printf("%d\n", current_b->data);
	// 	current_b = current_b->next;
	// }
	if (num_order_check(stack_a) == 1)
	{
		ft_printf("Hmm, it seems the stack has still not been sorted\n\n");
	}
	else
	{
		ft_printf("Great! We managed to sort the stack, this calls for celebration!\n\n");
		ft_printf("This is the num_operations in stack a: %d\n", stack_a->num_operation);
		ft_printf("This is the num_operations in stack b: %d\n", stack_b->num_operation);
		ft_printf("And hence this is the total number of operations taken to sort the stack: %d\n", (stack_a->num_operation + stack_b->num_operation));
	}
	free_nodes(stack_a->head);
	free(stack_a);
	free(stack_b);
	// if (num_order_check(stack_a) == 1)
	// {
	// 	ft_printf("Linkedlist is not yet sorted\n");
	// }
	// else
	// 	ft_printf("Linkedlist is sorted\n");
	return (0);
}
