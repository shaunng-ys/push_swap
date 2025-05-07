/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:07:08 by shaun             #+#    #+#             */
/*   Updated: 2025/01/14 16:07:11 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	add_one(unsigned int i, char c)
{
		return (i + c);
}

int	main(void)
{
	char	*string = "12345";
	printf("ft_strmapi result: %s", ft_strmapi(string, add_one));
	return (0);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*string_records;
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	string_records = (char *)malloc((i + 1) * sizeof(char));
	if (string_records == 0)
		return (0);
	string_records[i] = 0;
	i = 0;
	while (s[i])
	{
		string_records[i] = f(i, s[i]);
		i++;
	}
	return (string_records);
}
