/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:14:42 by shaun             #+#    #+#             */
/*   Updated: 2025/01/15 14:14:45 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

// int	main(void)
// {
// 	int	fd = open("./test.c", O_RDWR);
// 	char	*string1 = "This is the 2nd string for testing";
// 	ft_putendl_fd(string1, fd);
// 	return (0);
// }

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	nl;

	i = 0;
	nl = '\n';
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &nl, 1);
}
