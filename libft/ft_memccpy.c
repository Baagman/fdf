/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:44:28 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/13 08:56:51 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;
	size_t			i;

	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		temp_dst[i] = temp_src[i];
		if (temp_src[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
