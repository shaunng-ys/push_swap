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

size_t	string_checker(char *s)
{
	size_t	i;
	size_t	j;
	size_t	signal0;
	size_t	counter;
	char	**d_array;
	long	temp;

	i = 0;
	j = 0;
	signal0 = 0;
	counter = 0;
	temp = 0;
	while (s[i] && signal0 == 0)
	{
		if ((s[i] >= '0' && s[i] <= '9') || (s[i] == '+' || s[i] == '-'))
			signal0 = 0;
		else if (ft_isspace(s[i]) == 1)
			signal0 = 0;
		else
			return (1);
		i++;
	}
	d_array = ft_split(s, ' ');
	i = 0;
	while (d_array[i] != NULL)
	{
		while (d_array[i][j])
		{
			if ((d_array[i][j] == '+' || d_array[i][j] == '-') && j != 0)
				return (1);
			j++;
		}
		j = 0;
		temp = ft_atol(d_array[i]);
		if (temp > 2147483647 || temp < -2147483648)
			return (1);
		while (d_array[j] != NULL && counter <= 1)
		{
			if (ft_atol(d_array[j++]) == temp)
				counter++;
		}
		if (counter > 1)
			return (1);
		else if (counter == 1)
			counter = 0;
		j = 0;
		free(d_array[i]);
		i++;
	}
	free(d_array);
	return (0);
}
