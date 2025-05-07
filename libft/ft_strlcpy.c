/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:51:51 by shaun             #+#    #+#             */
/*   Updated: 2024/11/18 20:51:54 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize);

int main(void)
{
    char    destination[100] = "This will be overwritten";
    const char  *source = "This is read-only";
    size_t  limiter = 0;
    size_t  placeholder;

    printf("Old source string (rep): %s\n", source);
    printf("Old destination string (rep): %s\n", destination);
    placeholder = ft_strlcpy(destination, source, limiter);
    printf("New destination string (rep): %s\n", destination);
    printf("Return value (rep): %zu\n\n", placeholder);

    //This next bit of code is for comparing the replica to the original
    // char    destination1[100] = "This will be overwritten";
    // const char  source1[100] = "This is read-only";
    // size_t  nbr = 17;
    // size_t placeholder1;

    // printf("Old source string (og): %s\n", source1);
    // printf("Old destination string (og): %s\n", destination1);
    // placeholder1 = strlcpy(destination1, source1, nbr);
    // printf("New destination string (og): %s\n", destination1);
    // printf("Return value (og): %zu\n", placeholder1);
    return (0);
}
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	int		i;
	size_t	cntr;

	i = 0;
	cntr = 0;
	while (dst_size > 1 && src[i])
	{
		dst[i] = src[i];
		i++;
		dst_size--;
	}
	if (dst_size != 0)
		dst[i] = 0;
	i = 0;
	while (src[i])
	{
		i++;
		cntr++;
	}
	return (cntr);
}
