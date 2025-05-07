/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:06:42 by shaun             #+#    #+#             */
/*   Updated: 2025/01/15 14:06:45 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

// int	main(void)
// {
// 	int	fd;
// 	char	*string;
// 	fd = open("./test.c", O_RDWR);
// 	string = "This is a string";
// 	ft_putstr_fd(string, fd);
// 	return (0);
// }

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
