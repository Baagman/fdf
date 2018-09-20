/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:45:08 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/13 08:54:02 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Memmove copies len number of bytes from src to dst
** check if the two strings overlap
** if they do overlap, find which end of dst overlaps
** if the beginning of dst overlap, copy from end to beginning
** else copy from from beginning to end
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp_src;
	char	*temp_dst;
	size_t	i;

	i = 0;
	temp_src = (char *)src;
	temp_dst = (char *)dst;
	if (temp_dst > temp_src)
	{
		while ((int)(--len) >= 0)
			temp_dst[len] = temp_src[len];
	}
	else
	{
		while (i < len)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	return (dst);
}
