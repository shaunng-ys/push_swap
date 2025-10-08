/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decibase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:09:01 by shaun             #+#    #+#             */
/*   Updated: 2025/10/08 16:09:04 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	strrev(char *str)
{
	int		len;
	int		i;
	char	temp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
}

char	*fromdeci(char binstr[], int data)
{
	int	i;

	i = 0;
	while (data > 0)
	{
		binstr[i++] = (data % 2) + '0';
		data = data / 2;
	}
	binstr[i] = '\0';
	strrev(binstr);
	return (binstr);
}
// int	main(int argc, char **argv)
// {
// 	int		data;
// 	char	result[100];

// 	data = 6547382;
// 	printf("This is the binary string of the number %d: %s\n", data, fromdeci(result, data));
// 	return (0);
// }