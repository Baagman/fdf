/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 10:53:22 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/14 11:48:50 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t		ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = dstsize;
	j = ft_strlen(dst) + ft_strlen(src);
	while ((*dst != '\0') && (dstsize > 0))
	{
		dst++;
		dstsize--;
	}
	if (dstsize == 0)
		return (ft_strlen(src) + i);
	while ((*src != '\0') && (dstsize > 1))
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = '\0';
	return (j);
}
