/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:00:55 by tbaagman          #+#    #+#             */
/*   Updated: 2018/05/22 08:44:35 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*dst;
	size_t	index;

	dst = (char *)s;
	index = 0;
	if (n == 0)
		return ;
	while (index < n)
	{
		dst[index] = '\0';
		index++;
	}
}
