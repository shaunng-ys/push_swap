/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:54:15 by shaun             #+#    #+#             */
/*   Updated: 2024/11/18 16:54:19 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main(void)
// {
//     unsigned int    nbr = 8;
//     char    source_string[] = "lorem ipsum dolor sit amet";
// 	char	*dest = source_string + 1;
//     char    destination_string[100] = "_________ Faith";
//     printf("This is the source string: %s\n", source_string);
//     printf("This is the destination string: %s\n", destination_string);
//     printf("This is the destination string: %s\n", destination_string);
//     return (0);
// }

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				limit;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	limit = n;
	i = 0;
	if (!dest && !src && n > 0)
		return (NULL);
	if (d > s && d < (s + limit))
		while (limit--)
			d[limit] = s[limit];
	else
	{
		while (limit--)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// int main(void)
// {
//     unsigned int    nbr = 10000000;
//     const char    *source_string = "Immovable";
//     char    destination_string[100] = "_________ Faith";
//     // printf("This is the source string: %s\n", source_string);
//     // printf("This is the destination string: %s\n", destination_string);
//     // printf("This is the destination string: %s\n", destination_string);
//     return (0);
// }

// void    *ft_memmove(void *dest, const void *src, size_t n);
// {
// 	while (n)
// 	{

// 		(char *)dest = src[n--]
// 	}
// }

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	unsigned int	i;
// 	unsigned int	nbr;
// 	char			*temp;

// 	i = 0;
// 	nbr = n;
// 	temp = malloc(n * sizeof(char));
// 	if (temp == NULL)
// 		return (0);
// 	while (nbr)
// 	{
// 		temp[i] = ((char *)src)[i];
// 		i++;
// 		nbr--;
// 	}
// 	i = 0;
// 	while (n)
// 	{
// 		((char *)dest)[i] = temp[i];
// 		i++;
// 		n--;
// 	}
// 	free (temp);
// 	return (dest);
// }
