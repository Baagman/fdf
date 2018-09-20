/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:07:18 by tbaagman          #+#    #+#             */
/*   Updated: 2018/05/28 09:37:35 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char find;
	char *temp_s;

	find = (char)c;
	temp_s = (char *)s;
	while (*temp_s != find)
	{
		if (*temp_s == find)
			return (temp_s);
		else if ((*temp_s == '\0') && (*temp_s != find))
			return (NULL);
		temp_s++;
	}
	return (temp_s);
}
