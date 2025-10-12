/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:35:10 by shaun             #+#    #+#             */
/*   Updated: 2025/02/14 17:35:14 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	itr(unsigned long nbr, char *base)
{
	size_t	n;
	size_t	placeholder;
	size_t	base_nbr;

	n = 0;
	placeholder = nbr;
	base_nbr = ft_strlen(base);
	if (placeholder == 0)
		n++;
	while (placeholder > 0)
	{
		placeholder = placeholder / base_nbr;
		n++;
	}
	return (n);
}
