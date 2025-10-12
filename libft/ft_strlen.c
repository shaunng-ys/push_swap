/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:34:00 by shaun             #+#    #+#             */
/*   Updated: 2024/11/07 16:00:54 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

// int	main(void)
// {
// 	size_t		r;
// 	const char	*str;

// 	str = "Apple Macbook Pro 16";
// 	r = ft_strlen(str);
// 	ft_printf("%zu\n", r);
// 	return (0);
// }

size_t	ft_strlen(const char *s)
{
	size_t	nbr_of_char;
	int		i;

	nbr_of_char = 0;
	i = 0;
	while (s[i])
	{
		i++;
		nbr_of_char++;
	}
	return (nbr_of_char);
}
