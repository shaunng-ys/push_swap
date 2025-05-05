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

#include "libft.h"

size_t	string_checker(char *s)
{
	size_t	i;
	size_t	j;
	size_t	signal0;
	size_t	signal1;
	char	**d_array;
	long	temp;

	i = 0;
	j = 0;
	signal0 = 0;
	signal1 = 0;
	temp = 0;
	while (s[i])
	{
		if ((s[i] >= '0' || s[i] <= '9') || s[i] == '+' || s[i] == '-')
			signal0 = 1;
		else if (ft_isspace(s[i]) == 1)
			signal0 = 1;
		else
			signal0 = 0;
	   	i++;
	}
	d_array = ft_split(s, ' ');
	i = 0;
	while (d_array[i] != NULL)
	{
		temp = ft_atol(d_array[i]);
		if (temp > 2147483647 || temp < -2147483648)
			signal1 = 0;
		while (d_array[j] != NULL & )
		{
			if (temp )
		}
		i++;
	}
}
