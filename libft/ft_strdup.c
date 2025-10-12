/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:42:01 by shaun             #+#    #+#             */
/*   Updated: 2024/12/02 18:42:02 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main(void)
// {
//     const char  *src_str = "lorem ipsum dolor sit amet";
//     char    *ptr2dup;
//     ptr2dup = ft_strdup(src_str);
//     ft_printf("%p\n%s", ptr2dup, ptr2dup);    
//     return (0);
// }

char	*ft_strdup(const char *s)
{
	int		i;
	int		counter;
	void	*ptr;

	i = 0;
	counter = 0;
	while (s[i])
	{
		i++;
		counter++;
	}
	i = 0;
	ptr = malloc ((counter + 1) * sizeof(char));
	if (ptr == 0)
		return (0);
	while (counter)
	{
		((char *)ptr)[i] = s[i];
		i++;
		counter--;
	}
	((char *)ptr)[i] = 0;
	return (ptr);
}
