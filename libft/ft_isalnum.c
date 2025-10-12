/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:14:44 by shaun             #+#    #+#             */
/*   Updated: 2024/11/07 10:27:48 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int	ft_isalnum(int c);

int	main(void)
{
	ft_printf("Statement is true if followed by 1, false if followed by 0\n");
	ft_printf("Is 'A' alphanumeric: %d\n", ft_isalnum('A'));
	ft_printf("Is 'Z' alphanumeric: %d\n", ft_isalnum('Z'));
	ft_printf("Is 'a' alphanumeric: %d\n", ft_isalnum('a'));
	ft_printf("Is 'z' alphanumeric: %d\n", ft_isalnum('z'));
	ft_printf("Is '0' alphanumeric: %d\n", ft_isalnum('0'));
	ft_printf("Is '9' alphanumeric: %d\n", ft_isalnum('9'));
	ft_printf("Is null alphanumeric: %d\n", ft_isalnum(0));
	return (0);
}
*/
int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
