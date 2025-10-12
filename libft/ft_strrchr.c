/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:08:12 by shaun             #+#    #+#             */
/*   Updated: 2024/11/19 19:08:14 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char    *ft_strrchr(const char *s, int c);

int main(void)
{
    int a;
    char    *str = "bonjour";

    a = 'b';
    ft_printf("%s", ft_strrchr(str, a));
    return (0);
}
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = (char)c;
	if (c == 0)
	{
		while (s[i])
			i++;
		return ((char *)(s + i));
	}
	else
	{
		while (s[i])
			i++;
		while (i)
		{
			if (s[i] == c)
				return ((char *)(s + i));
			else if (s[i - 1] == c)
				return ((char *)(s + i - 1));
			i--;
		}
		return (0);
	}
}
