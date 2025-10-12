/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:11:35 by shaun             #+#    #+#             */
/*   Updated: 2024/11/28 16:11:38 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main(void)
// {
//     const char  *str_nbr = "       -684909876789098731295abcd";
//     // ft_printf("%d\n", ft_atoi(str_nbr));
// 	ft_printf("%d\n\n", ft_atoi("+-54"));
// 	// ft_printf("%d\n", atoi(str_nbr));
// 	// ft_printf("%d\n", atoi(str_nbr));	
// 	// ft_printf("%d\n", ft_atoi(str_nbr));
// 	return (0);
// }

// int	reach_the_nbr(const char *ptr)
// {
// 	char	*temp;
// 	int		i;
// 	int		sign_tracker0;

// 	i = 0;
// 	temp = (char *)ptr;
// 	while((ptr[i] == ' ' || (ptr[i] > 8 && ptr[i] < 14)))
// 		i++;
// 	if (ptr[i] == '+' || nptr[i] == '-')
// 	{
// 		if (ptr[i++] == '+')
// 			sign_tracker0 = 1;
// 		else
// 			sign_tracker0 = -1;
// 	}
// 	return (sign_tracker0);
// }

static long	ft_divisor(int counter)
{
	long	multiplier;

	multiplier = 1;
	while (--counter > 0)
		multiplier *= 10;
	return (multiplier);
}

static long	part2atol(const char *string, int index)
{
	int	counter;
	long	multiplier;
	long	tally;
	long	nbr2add;

	counter = 0;
	multiplier = 1;
	tally = 0;
	nbr2add = 0;
	while (string[index] >= '0' && string[index] <= '9')
	{
		counter++;
		index++;
	}
	index = index - counter;
	multiplier = ft_divisor(counter);
	while (string[index] >= '0' && string[index] <= '9')
	{
		nbr2add = (string[index++] - 48) * multiplier;
		if (multiplier > 1)
			multiplier = multiplier / 10;
		tally = tally + nbr2add;
	}
	return (tally);
}

long	ft_atol(const char *nptr)
{
	int	i;
	long	sign_tracker;

	i = 0;
	sign_tracker = 1;
	while ((nptr[i] == ' ' || (nptr[i] > 8 && nptr[i] < 14)))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i++] == '+')
			sign_tracker = 1;
		else
			sign_tracker = -1;
	}
	return (part2atol(nptr, i) * sign_tracker);
}
