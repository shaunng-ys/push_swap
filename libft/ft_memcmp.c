/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:50:11 by shaun             #+#    #+#             */
/*   Updated: 2024/11/22 20:50:15 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int memcmp(const void s1[.n], const void s2[.n], size_t n);

// int main(void)
// {
//     const char  *str1 = "This is string 253";
//     const char  *str2 = "This is string 253";
//     const int   nbr_array0[] = {0, 1, 2, 3, 65535122};
//     const int   nbr_array1[] = {0, 1, 2, 3, 25};
//     size_t limiter = sizeof(char) * 19;
//     size_t limiter1 = sizeof(int) * 5;
//     //Snippet for comparing with the original memcmp function
//     int nbr_arr0[] = {0, 1, 2, 3, 65535};
//     int nbr_arr1[] = {0, 1, 2, 3, 255};
//     size_t limiter = 20 * sizeof(int);
//     ft_printf("%d", memcmp(((void *)nbr_arr0), ((void *)nbr_arr1), limiter));
//     ft_printf("%d\n", memcmp(str1, str2, limiter));
//     ft_printf("%d\n", memcmp(nbr_array0, nbr_array1, limiter1));
//     ft_printf("%d\n", ft_memcmp(str1, str2, limiter));
//     ft_printf("%d\n", ft_memcmp(nbr_array0, nbr_array1, limiter1));
//     return (0);
// }

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
		n--;
	}
	return (0);
}
