/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 11:38:15 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/16 09:58:46 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (needle == haystack)
		return ((char *)haystack);
	if (*needle == '\0')
		return ((char *)haystack);
	while ((haystack[i] != '\0') && (i < len))
	{
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		if (needle[j] == '\0')
		{
			j--;
			return ((char *)haystack + (i - j));
		}
		i++;
	}
	return (NULL);
}
