/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:20:08 by shaun             #+#    #+#             */
/*   Updated: 2024/11/07 15:59:53 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	ft_isprint(int c);

int	main(void)
{
	int	c0;
	int	c1;

	c0 = '\n';
	c1 = 'a';
	ft_printf("%d\n", ft_isprint(126));
	ft_printf("%d\n", ft_isprint(c1));
	return (0);
}
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}
