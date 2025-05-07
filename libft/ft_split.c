/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:41:46 by shaun             #+#    #+#             */
/*   Updated: 2025/01/16 19:41:50 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	word_count(char const *string, char separator)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (string[i] != 0)
	{
		if (string[i] != separator && string[i])
			counter++;
		while (string[i] != separator && string[i])
			i++;
		while (string[i] == separator && string[i])
			i++;
	}
	return (counter);
}

// static int	*lens_array(char const *string, char delim, int nbrofwords)
// {
// 	int	i;
// 	int	j;
// 	int	counter;
// 	int	*sequence_of_numbers;

// 	i = 0;
// 	j = 0;
// 	counter = 0;
// 	sequence_of_numbers = malloc((nbrofwords + 1) * sizeof(int));
// 	if (sequence_of_numbers == 0)
// 		return (NULL);
// 	while (string[i])
// 	{
// 		while (string[i] != delim && string[i++])
// 			counter++;
// 		if (j < nbr_of_words) {
// 			sequence_of_numbers[j++] = counter;
// 		}
// 		counter = 0;
// 		// Can remove
// 		while (string[i] != delim && string[i++])
// 			;
// 		while (string[i] == delim && string[i])
// 			i++;
// 	}
// 	sequence_of_numbers[j] = -1;
// 	return (sequence_of_numbers);
// }

static int	*lens_array(char const *string, char delimiter, int nbr_of_words)
{
	int	i;
	int	j;
	int	counter;
	int	*sequence_of_numbers;

	i = 0;
	j = 0;
	counter = 0;
	sequence_of_numbers = malloc((nbr_of_words + 1) * sizeof(int));
	if (sequence_of_numbers == 0)
		return (NULL);
	while (string[i])
	{
		while (string[i] == delimiter && string[i])
			i++;
		while (string[i] && string[i++] != delimiter)
			counter++;
		if (j < nbr_of_words)
			sequence_of_numbers[j++] = counter;
		counter = 0;
	}
	sequence_of_numbers[j] = -1;
	return (sequence_of_numbers);
}

static char	*string_move(char const *s, int ind, int string_length, char c)
{
	char	*temp_string;
	int		i;

	i = 0;
	temp_string = malloc((string_length + 1) * (sizeof(char)));
	if (temp_string == 0)
		return (NULL);
	while (s[ind] != c && s[ind])
		temp_string[i++] = s[ind++];
	temp_string[i] = '\0';
	return (temp_string);
}

static char	**dou_arr(int nbr_of_words)
{
	char	**double_array;

	double_array = malloc((nbr_of_words + 1) * sizeof(char *));
	if (double_array == 0)
		return (0);
	double_array[nbr_of_words] = NULL;
	return (double_array);
}

char	**ft_split(char const *s, char c)
{
	char	**two_d_array;
	int		i;
	int		j;
	int		k;
	int		*len_of_string;

	len_of_string = lens_array(s, c, word_count(s, c));
	two_d_array = dou_arr(word_count(s, c));
	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (len_of_string[j] == -1)
			break ;
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			two_d_array[k++] = string_move(s, i, len_of_string[j++], c);
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (free(len_of_string), two_d_array);
}
