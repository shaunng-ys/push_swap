/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:13:26 by shaun             #+#    #+#             */
/*   Updated: 2024/11/30 17:13:27 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main(void)
// {
//     void *memspace_ptr;
//     int counter = 30 * sizeof(char);
//     int i = 0;

//     memspace_ptr = ft_calloc(30, sizeof(char));
//     printf("%p\n", memspace_ptr);
//     while (counter)
//     {
//         printf("%d", ((char *)memspace_ptr)[i]);
//         i++;
//         counter--;
//     }
//     return (0);
// }

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;
	size_t	store;

	i = 0;
	store = (count * size);
	if (count == 0 || size == 0)
	{
		ptr = malloc(1);
		((char *)ptr)[0] = 0;
		return (ptr);
	}
	if (size == ((size_t) - 1) / count)
		return (NULL);
	if (size >= 2147483647 / count)
		return (NULL);
	ptr = (malloc(count * size));
	if (ptr == 0)
		return (0);
	while (i < store)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
