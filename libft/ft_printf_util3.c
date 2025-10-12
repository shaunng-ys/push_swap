/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 22:29:10 by shaun             #+#    #+#             */
/*   Updated: 2025/02/14 22:29:12 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf_util3(const char *string, size_t index, va_list *args, int n)
{
	unsigned int		pl;
	size_t				cyc;
	int					i;

	i = 0;
	if (string[index] == 'u')
	{
		pl = va_arg(*args, unsigned int);
		cyc = itr(pl, "0123456789");
		n = n + ft_putnbr_base(pl, "0123456789", &i, cyc);
	}
	else if (string[index] == 'x')
	{
		pl = va_arg(*args, unsigned int);
		cyc = itr(pl, "0123456789abcdef");
		n = n + ft_putnbr_base(pl, "0123456789abcdef", &i, cyc);
	}
	else if (string[index] == 'X')
	{
		pl = va_arg(*args, unsigned int);
		cyc = itr(pl, "0123456789ABCDEF");
		n = n + ft_putnbr_base(pl, "0123456789ABCDEF", &i, cyc);
	}
	return (n);
}
