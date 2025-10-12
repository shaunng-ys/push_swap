/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:35:31 by shaun             #+#    #+#             */
/*   Updated: 2024/11/23 16:35:33 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main(void)
// {
// 	//Example from manual
// 	const char	*largestring = "aaabcabcd";
// 	const char	*smallstring = "aaabc";
// 	char *ptr;
// 	ptr = ft_strnstr(largestring, smallstring, 5);
// 	ft_printf("%s\n", ptr);
// 	ft_printf("%s\n", strnstr(largestring, smallstring, 5));
// 	return (0);
// }

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	tracer;
	size_t	len_copy;

	i = 0;
	len_copy = len;
	if (little[i] == 0)
		return ((char *)big);
	while (len-- != 0 && big[i])
	{
		tracer = 0;
		len_copy = len + 1;
		while (big[i + tracer] == little[tracer] && len_copy-- != 0)
		{
			if ((tracer + 1) == ft_strlen(little))
				return ((char *)big + i);
			tracer++;
		}
		i++;
	}
	return (0);
}
// char *ft_strnstr(const char *big, const char *little, size_t len)
// {
//     size_t i;
//     size_t j;

//     if (little[0] == '\0')
//         return ((char *)big);
//     i = 0;
//     while (big[i] && len > i)
//     {
//         j = 0;
//         while (big[i + j] == little[j] && (i + j) < len)
//         {
//             j++;
//             if (little[j] == '\0')
//                 return ((char *)big + i);
//         }
//         i++;
//     }
//     return (NULL);
// }