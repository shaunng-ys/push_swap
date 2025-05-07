/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:56:08 by shaun             #+#    #+#             */
/*   Updated: 2024/11/18 15:56:12 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void    ft_bzero(void *s, size_t n);

int main(void)
{
    char    s[100] = "This string should be non-printable";
    size_t  nbr = sizeof(char)*4;

    printf("%s\n", s);
    ft_bzero(s, nbr);
    printf("This is the output after the former string has passed through);
    return (0);
}
*/
void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (n)
	{
		((char *)s)[i] = 0;
		i++;
		n--;
	}
}
