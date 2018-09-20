/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 12:42:49 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/13 14:27:35 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strstr searches for the string needle, int string haystack **
** if both string are empty then haystack is returned **
** we are looking for string needle in string haystack **
** so we are going to loop through haystack while its not end **
** by using pointer arithmetic we can have the power of eleminating some chars
** in the haystack string **
** we'll be comparing needle number of bytes **
** if the two strings are equal in len number of bytes then return, **
** a pointer of the located byte in haystack **
** if string needle is nowhere in haystack then NULL is returned **
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t len;

	if ((*haystack == '\0') && (*needle == '\0'))
		return ((char *)haystack);
	len = ft_strlen(needle);
	while (*haystack != '\0')
	{
		if (ft_memcmp(haystack, needle, len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
