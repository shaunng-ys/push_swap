/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:21:35 by shaun             #+#    #+#             */
/*   Updated: 2025/01/13 21:21:41 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main(void)
// {
//     int nbr;

//     nbr = -2147483648LL;
// 	printf("%d\n", INT32_MIN);
//     printf("\nThis is the number that was inputed: %s", ft_itoa(nbr));
//     return (0);
// }

char	*str_input(char *string, int places, int n)
{
	long	placeholder;

	placeholder = n;
	string[places +1] = '\0';
	if (placeholder < 0)
		placeholder = placeholder * -1;
	while (placeholder >= 10)
	{
		string[places--] = (placeholder % 10) + 48;
		placeholder = placeholder / 10;
	}
	string[places] = placeholder + 48;
	if (n < 0)
		string[0] = '-';
	return (string);
}

char	*ft_itoa(int n)
{
	long	placeholder;
	int		nbr_of_places;
	char	*string;

	placeholder = n;
	nbr_of_places = 0;
	if (placeholder < 0)
	{
		nbr_of_places++;
		placeholder = placeholder * -1;
	}
	while (placeholder >= 10)
	{
		placeholder = placeholder / 10;
		nbr_of_places++;
	}
	string = (char *)malloc((nbr_of_places + 2) * sizeof(char));
	if (string == 0)
		return (0);
	return (str_input(string, nbr_of_places, n));
}
