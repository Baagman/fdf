/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 13:23:21 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/14 15:01:17 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Searches for the first occurrence of c in n number of bytes **
** if c is nowhere in s then NULL is returned othersiwe if c is found **
** a pointer to byte in s is returned, or if n == 0, pointer to s is returned
** if n == 0 then pointer to s is returned **
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	find;
	unsigned char	*temp_s;
	size_t			i;

	find = (unsigned char)c;
	temp_s = (unsigned char *)s;
	i = 0;
	if (s == NULL)
		return (NULL);
	while ((*temp_s != find) && (n >= i))
	{
		i++;
		if (i == n)
			return (NULL);
		else if (*temp_s == find)
			return (temp_s);
		temp_s++;
	}
	return (temp_s);
}
