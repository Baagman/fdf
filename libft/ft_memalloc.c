/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 12:39:39 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/04 12:55:10 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *buff;

	buff = (void *)malloc(size);
	if (buff == NULL)
		return (NULL);
	ft_bzero(buff, size);
	return (buff);
}
