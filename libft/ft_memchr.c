/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:01:18 by shaun             #+#    #+#             */
/*   Updated: 2024/11/21 18:01:20 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main(void)
// {
// 	printf("%s", ((char *)memchr("bonjour", 's', 7)));
//     printf("\n%s", ((char *)ft_memchr("bonjour", 's', 7)));
//     return (0);
// }

	// check_memchr("bonjour", 'b', 4);
	// else if (arg == 2)
	// 	check_memchr("bonjour", 'o', 7);
	// else if (arg == 3)
	// 	check_memchr("bonjourno", 'n', 2);
	// else if (arg == 4)
	// 	check_memchr("bonjour", 'j', 6);
	// else if (arg == 5)
	// 	check_memchr("bonjour", 's', 7);

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
		n--;
	}
	return (0);
}

// #include "libft.h"

// void *ft_memchr(const void *s, int c, size_t n)
// {
//     unsigned char *str;
//     size_t i;
//     unsigned char uc;

//     /* converting both s and c to unsigned char */
//     str = (unsigned char *) s;
//     uc = (unsigned char) c;
//     i = 0;
//     /* looping over n bytes */
//     while (i < n)
//     {
//         /* same check as strchr */
//         if (str[i] == uc)
//             /* there, we return a void pointer instead
//              * of the char pointer we returned in strchr
//              */
//             return ((void *) &str[i]);
//         i++;
//     }
//     /* if we reached this point, we didn't find any occurence
//      * of c in n bytes, so we return NULL
//      */
//     return (NULL);
// }