/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:10:47 by shaun             #+#    #+#             */
/*   Updated: 2025/01/14 18:10:49 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	test_function(unsigned int j, char *pointer)
// {
// 	*pointer += 32;
// }
// int	main(void)
// {
// 	char	string[] = "THIS IS A STRING";
// 	ft_printf("This is the original string: %s\n", string);
// 	ft_striteri(string, test_function);
// 	ft_printf("The is the string (after ft_striteri): %s\n", string);
// 	return (0);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
