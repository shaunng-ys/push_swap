/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:50:04 by shaun             #+#    #+#             */
/*   Updated: 2024/12/19 16:50:07 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*start_point(char const *string1, char const *chars)
{
	char	*start;
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	start = (char *)string1;
	while (string1[i] != '\0')
	{
		if (string1[i] == chars[j])
		{
			start++;
			i++;
			j = 0;
		}
		else if (string1[i] != chars[j])
		{
			while (string1[i] != chars[j] && chars[j])
				j++;
			if (string1[i] != chars[j] || chars[j] == 0)
				return (start);
		}
	}
	return (start);
}

char	*end_point(char const *string1, char const *chars)
{
	char	*end;
	size_t	j;
	int		k;

	k = ft_strlen(string1) - 1;
	end = (char *)&string1[k + 1];
	j = 0;
	while (k > 0)
	{
		if (string1[k] == chars[j])
		{
			end--;
			k--;
			j = 0;
		}
		else if (string1[k] != chars[j])
		{
			while (string1[k] != chars[j] && chars[j])
				j++;
			if (string1[k] != chars[j] || chars[j] == '\0')
				return (end);
		}
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*new_string;
	int		i;
	int		k;

	i = 0;
	start = (char *)s1;
	end = (char *)s1;
	start = start_point(s1, set);
	if (start[0] == 0)
		return (ft_calloc(1, 1));
	end = end_point(s1, set);
	i = 0;
	new_string = (char *)malloc((end - start + 1) * sizeof(char));
	if (new_string == 0)
		return (0);
	new_string[end - start] = '\0';
	k = end - start + 1;
	while (--k > 0)
	{
		new_string[i] = start[i];
		i++;
	}
	return (new_string);
}
