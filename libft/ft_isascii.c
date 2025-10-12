/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:31:35 by shaun             #+#    #+#             */
/*   Updated: 2024/11/07 11:02:14 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	ft_isascii(int c);

int	main(void)
{
	char	c0;
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c0 = '\0';
	c1 = '\n';
	c2 = '2';
	c3 = 'a';
	c4 = 200;
	ft_printf("%d\n", ft_isascii(c0));
	ft_printf("%d\n", ft_isascii(c1));
	ft_printf("%d\n", ft_isascii(c2));
	ft_printf("%d\n", ft_isascii(c3));
	ft_printf("%d\n", ft_isascii(c4));
	return (0);
}
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
