/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:23:47 by shaun             #+#    #+#             */
/*   Updated: 2025/02/06 16:23:50 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf_util1(const char *string, size_t index, va_list *args, int n)
{
	char				*string_placeholder;
	size_t				j;

	j = 0;
	if (string[index] == 'c')
		n = n + ft_putchar_fd(va_arg(*args, int), 1);
	else if (string[index] == 's')
	{
		string_placeholder = va_arg(*args, char *);
		if (string_placeholder == NULL)
			return (n + write(1, "(null)", 6));
		while (string_placeholder[j])
			n = n + ft_putchar_fd(string_placeholder[j++], 1);
	}
	return (n);
}
