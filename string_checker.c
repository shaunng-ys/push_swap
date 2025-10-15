/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 21:51:35 by shaun             #+#    #+#             */
/*   Updated: 2025/05/03 21:51:37 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

size_t	first_filter(char *s)
{
	int		i;
	size_t	signal;

	i = 0;
	signal = 0;
	if (s[0] == '\0')
		return (1);
	while (s[i] && signal == 0)
	{
		if ((s[i] >= '0' && s[i] <= '9') || (s[i] == '+' || s[i] == '-'))
			signal = 0;
		else if (ft_isspace(s[i]) == 1)
			signal = 0;
		else
			return (1);
		i++;
	}
	return (0);
}

size_t	second_filter(char **d_array, int i, long temp)
{
	int	j;

	j = 0;
	while (d_array[i][j])
	{
		if ((d_array[i][j] == '+' || d_array[i][j] == '-') && j != 0)
			return (1);
		else if (((d_array[i][j] == '+' || d_array[i][j] == '-') && j == 0))
			if (d_array[i][j + 1] < '0' || d_array[i][j + 1] > '9')
				return (1);
		j++;
	}
	j = 0;
	temp = ft_atol(d_array[i]);
	if (temp > 2147483647 || temp < -2147483648)
		return (1);
	return (0);
}

size_t	string_comb(char **d_array)
{
	int		i;
	long	temp;

	i = 0;
	temp = 0;
	while (d_array[i] != NULL)
	{
		if (second_filter(d_array, i, temp) == 1)
			return (1);
		free(d_array[i]);
		i++;
	}
	return (0);
}

size_t	string_checker(char *s)
{
	size_t	j;
	char	**d_array;

	j = 0;
	if (first_filter(s) == 1)
		return (1);
	d_array = ft_split(s, ' ');
	if (string_comb(d_array) == 1)
	{
		free(d_array);
		return (1);
	}
	free(d_array);
	return (0);
}

size_t	dupe_checker(t_linkedlist *a)
{
	t_node	*current1;
	t_node	*current2;

	current1 = a->head;
	current2 = current1->next;
	while (current1->next != NULL)
	{
		current2 = current1->next;
		while (current2 != NULL)
		{
			if (current1->data == current2->data)
				return (1);
			current2 = current2->next;
		}
		current1 = current1->next;
	}
	return (0);
}
