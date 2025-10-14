/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decibase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:09:01 by shaun             #+#    #+#             */
/*   Updated: 2025/10/08 16:09:04 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	strrev(char *str)
{
	int		len;
	int		i;
	char	temp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
}

void	fromdeci(char *binstr, int data, int bytes)
{
	int	i;

	i = 0;
	while (data > 0)
	{
		binstr[i++] = (data % 2) + '0';
		bytes--;
		data = data / 2;
	}
	while (bytes > 0)
	{
		binstr[i++] = '0';
		bytes--;
	}
	binstr[i] = '\0';
	strrev(binstr);
}
