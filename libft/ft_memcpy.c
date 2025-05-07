/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:20:34 by shaun             #+#    #+#             */
/*   Updated: 2024/11/18 16:20:42 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void    *ft_memcpy(void *dest_str, const void *src_str, size_t n);

int main(void)
{
    const char    source_str[100] = "What about love?";
    char    destination_str[100] = "What about us?";
    size_t nbr;

    nbr = 16 * sizeof(char);
    printf("These are the original values: %s\n", destination_str);
    ft_memcpy(destination_str, source_str, nbr);
    printf("These are the new values: %s\n", destination_str);
    return (0);
}
*/
// int	main(void)
// {
// 	void *mem = malloc(sizeof(*mem) * 30);
// 	memset(mem, 'j', 30);
// 	printf("%s\n", (char *)memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 0));
// 	printf("%s\n", (char *)ft_memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 0));
// 	return (0);
// }
void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	int				i;

	i = 0;
	while (n)
	{
		((char *)dest_str)[i] = ((char *)src_str)[i];
		i++;
		n--;
	}
	return (dest_str);
}
