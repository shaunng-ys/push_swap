/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:27:30 by shaun             #+#    #+#             */
/*   Updated: 2024/11/19 13:27:33 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int main(void)
{
    char    strspace[32] = "This is the destination string ";
    const char  *source_string = "Balloon animals fly towards the sun.";
    size_t  destination_size = 0;
    printf("%zu\n", ft_strlcat(strspace, source_string, destination_size));
	printf("%s\n", strspace);

	printf("%zu\n", strlcat(strspace, source_string, destination_size));
	printf("%s\n", strspace);
    return (0);
}
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	dstsize_copy;
	int		i;
	int		j;

	dst_len = ft_strlen(dst);
	dstsize_copy = dstsize;
	i = dst_len;
	j = 0;
	if (dstsize <= dst_len)
		return (dstsize + ft_strlen(src));
	if (dstsize > ft_strlen(src) + dst_len)
	{
		while (src[j])
			dst[i++] = src[j++];
		dst[i] = 0;
	}
	else if (dstsize_copy >= dst_len + 1)
	{
		while (dstsize_copy-- > dst_len + 1)
			dst[i++] = src[j++];
		dst[i] = 0;
	}
	return (dst_len + ft_strlen(src));
}
