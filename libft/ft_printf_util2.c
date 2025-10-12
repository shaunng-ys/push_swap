/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:23:58 by shaun             #+#    #+#             */
/*   Updated: 2025/02/06 16:24:00 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf_util2(const char *string, size_t index, va_list *args, int n)
{
	char			*string_placeholder;
	int				i;
	unsigned long	ul;
	size_t			cyc;

	i = 0;
	string_placeholder = "0123456789abcdef";
	if (string[index] == 'd' || string[index] == 'i')
	{
		string_placeholder = ft_itoa(va_arg(*args, int));
		while (string_placeholder[i])
			n = n + ft_putchar_fd(string_placeholder[i++], 1);
		free(string_placeholder);
	}
	else if (string[index] == 'p')
	{
		write(1, "0x", 2);
		n = n + 2;
		ul = (unsigned long)va_arg(*args, void *);
		cyc = itr(ul, string_placeholder);
		n = n + ft_putnbr_base(ul, string_placeholder, &i, cyc);
	}
	else if (string[index] == '%')
		n = n + ft_putchar_fd('%', 1);
	return (n);
}
