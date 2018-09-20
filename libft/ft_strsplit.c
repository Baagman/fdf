/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strslpit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 12:33:07 by tbaagman          #+#    #+#             */
/*   Updated: 2018/08/06 09:36:38 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function returns the actual number of words in the string,
** if the delimiter c is 42 in the string **Hello**World** Then it returns 2
*/

static	size_t	ft_len(char const *s, int c)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			j++;
			while ((s[i] != c) && (s[i] != '\0'))
				i++;
		}
	}
	return (j);
}

/*
** This function tests if s at the index is equal to c if it is not
** Then that could be taken as the start of the word in the string
** if it happens that when i = 0 and str != c then that would be the start
** it checks if the current char is not c and also if the previous char is c,
** if thats true then that means its the start of another word
** otherwise it returns a zero to show that the word has not started
*/

static	int		ft_is_start(char const *s, size_t index, int c)
{
	if ((index == 0) && (s[index] != c))
		return (1);
	if ((s[index] != c) && (s[index - 1] == c))
		return (1);
	return (0);
}

/*
** The function returns the index of s where str is not equl to c
*/

static	size_t	ft_to_start(char const *s, int c)
{
	size_t index;

	index = 0;
	while (s[index] == c)
		index++;
	return (index);
}

/*
 ** This function returns the legnth of the substring
*/

static	int		ft_substr_len(char const *s, size_t i, int c)
{
	size_t len;

	len = 0;
	while ((s[i + len] != c) && (s[i + len] != '\0'))
		len++;
	return (len);
}

/*
** This functions allocates memory for the 2D-array buy using ft_len
** Loops through the string s if it encounters the delimiter c
** it indexes to the next character that is not cabs
** It then counts the number of characters that are not c
** Uses that number as the length of the sub-string
*/

char			**ft_strsplit(char const *s, int c)
{
	size_t	i;
	char	**arr;
	int		len_of_substr;
	size_t	j;

	if (s == NULL)
		return (NULL);
	else
	{
		j = 0;
		i = ft_to_start(s, c);
		if (!(arr = (char **)malloc(sizeof(char *) * (ft_len(s, c) + 1))))
			return (NULL);
		while (s[i] != '\0')
		{
			if (ft_is_start(s, i, c) != 0)
			{
				len_of_substr = ft_substr_len(s, i, c);
				arr[j++] = ft_strsub(s, i, len_of_substr);
			}
			i++;
		}
		arr[j] = NULL;
	}
	return (arr);
}
