/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:47:15 by shaun             #+#    #+#             */
/*   Updated: 2024/12/19 15:47:22 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Parameters:
s1: The prefix string.
s2: The suffix string.

Return value: 
The new string.
NULL if the allocation fails.

External functs.:
malloc

Description:
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
*/
// char    *ft_strjoin(char const *s1, char const *s2);

// int main(void)
// {
//    char const  *first_string = "Hello, ";
//    char const  *second_string = "World";
//    /*
//    char const  *first_string = "Nike & ";
//    char const  *second_string = "Adidas";
//    */
//    printf("%s", ft_strjoin(first_string, second_string));
//    return (0);
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		counter;
	char	*ptr2joined;
	int		tracker;

	i = 0;
	counter = 0;
	tracker = 0;
	while (s1[i++])
		counter++;
	i = 0;
	while (s2[i++])
		counter++;
	ptr2joined = malloc(counter + 1);
	if (ptr2joined == NULL)
		return (0);
	i = 0;
	while (s1[i])
		ptr2joined[tracker++] = s1[i++];
	i = 0;
	while (s2[i])
		ptr2joined[tracker++] = s2[i++];
	((char *)ptr2joined)[tracker] = 0;
	return ((char *)ptr2joined);
}
