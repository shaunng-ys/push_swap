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

size_t	string_parser(char **str, int remaining, t_linkedlist *a)
{
	size_t	i;
	size_t	j;
	char	**strings;

	i = 1;
	j = 0;
	while (remaining)
	{
		if (string_checker(str[i]) == 1)
			return (ft_putstr_fd("Error\n", 2), 1);
		else
		{
			strings = ft_split(str[i], ' ');
			while (strings[j])
			{
				append(a, ft_atoi(strings[j]));
				free(strings[j++]);
			}
			free(strings);
		}
		j = 0;
		remaining--;
		i++;
	}
	return (0);
}

void	stack_sorter(t_linkedlist *a, t_linkedlist *b)
{
	if (a->size <= 5)
	{
		a->num_operation = 0;
		a->num_operation = 0;
		sort_small_stack(a, b);
	}
	if (a->size > 5)
	{
		a->num_operation = 0;
		b->num_operation = 0;
		labeller(a);
		sort_big_stack(a, b);
		free_binstr(a);
	}
}

int	main(int argc, char **argv)
{
	int				args;
	t_linkedlist	*stack_a;
	t_linkedlist	*stack_b;

	args = argc - 1;
	stack_a = createlinkedlist();
	stack_b = createlinkedlist();
	if (argc == 1)
		return (ft_putstr_fd("Error\n", 2), 1);
	if (string_parser(argv, args, stack_a) == 1)
	{
		free_nodes(stack_a->head);
		//might have to free_nodes, assuming, nodes have been created
		return (free(stack_a), free(stack_b), 1);
	}
	if (dupe_checker(stack_a) == 1)
	{
		free_nodes(stack_a->head);
		free(stack_a);
		free(stack_b);
		return (1);
	}
	stack_sorter(stack_a, stack_b);
	if (num_order_check(stack_a) == 1)
		ft_printf("Hmm, it seems the stack has still not been sorted\n\n");
	else
		ft_printf("Stack has been sorted in %d operations, congrats!\n",
			stack_a->num_operation);
	free_nodes(stack_a->head);
	free(stack_a);
	free(stack_b);
	return (0);
}
