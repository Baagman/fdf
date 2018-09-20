/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:35:29 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/13 13:19:57 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	if (*src == '\0')
	{
		while (i < len)
		{
			dst[i] = '\0';
			i++;
		}
	}
	else
	{
		while ((i < len) && (src[i] != '\0'))
		{
			dst[i] = src[i];
			i++;
		}
		while (i < len)
			dst[i++] = '\0';
	}
	return (dst);
}
