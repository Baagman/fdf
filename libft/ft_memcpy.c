/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:37:17 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/13 08:55:41 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function copies n number of bytes from src to dst **
** Returns the original value of dst **
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	index;
	char	*temp_src;
	char	*temp_dst;

	index = 0;
	temp_src = (char *)src;
	temp_dst = (char *)dst;
	while (index != n)
	{
		temp_dst[index] = temp_src[index];
		index++;
	}
	return (dst);
}
