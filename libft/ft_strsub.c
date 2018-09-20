/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 11:13:14 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/07 13:02:43 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*store;

	i = 0;
	if (s != NULL)
	{
		store = ft_strnew(len);
		if (store == NULL)
			return (NULL);
		while (i != len)
		{
			store[i] = s[start];
			i++;
			start++;
		}
		if (i == len)
			store[i] = '\0';
		return (store);
	}
	else
		return (NULL);
}
