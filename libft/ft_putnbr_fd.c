/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:24:31 by shaun             #+#    #+#             */
/*   Updated: 2025/01/15 14:24:33 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	int	nbr = -2147483648LL;
// 	//int	wtf = open("./test.c", O_RDWR);
// 	ft_putnbr_fd(nbr, 2);
// 	return (0);
// }

void	ft_putnbr_fd(int n, int fd)
{
	char	temp;

	if (n == -2147483648LL)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	temp = n % 10 + '0';
	write(fd, &temp, 1);
	return ;
}
