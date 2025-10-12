/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:03:00 by shaun             #+#    #+#             */
/*   Updated: 2025/02/07 16:03:05 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *string, ...)
{
	size_t	i;
	int		n;
	va_list	arg_list;

	i = 0;
	n = 0;
	va_start(arg_list, string);
	while (string[i])
	{
		if (string[i] != '%')
			n = n + ft_putchar_fd(string[i++], 1);
		else if (string[i++] == '%')
		{
			n = ft_printf_util1(string, i, &arg_list, n);
			n = ft_printf_util2(string, i, &arg_list, n);
			n = ft_printf_util3(string, i, &arg_list, n);
			i++;
		}
	}
	va_end(arg_list);
	return (n);
}
