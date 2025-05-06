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

#include "libft.h"

int	main(int argc, char **argv)
{
	int	args;
	size_t	i;

	args = argc;
	i = 1;
	if (argc == 1)
		ft_putstr("Error\n", 1);
	else
	{
		/*
		The while loop immediately below is meant to check whether strings
		are valid and if so add them to the stack, else print "Error\n"
		*/
		while (args)
		{
			/*
			How can I handle mixed inputs
			(multiple and varying length strings):
			./push_swap "1 2 4 3" 76 90 "348 05
			*/
			if (string_checker(argv[i]) == 1)
			{
				ft_putstr("Error\n", 1);
				return (1);
			}
			args--;
			i++;
		}

	}
}
