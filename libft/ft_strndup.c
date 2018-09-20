/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 13:37:11 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/18 13:51:19 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char *temp_dst;
	char *dup_s;

	temp_dst = (char *)malloc(n);
	if (temp_dst == NULL)
		return (NULL);
	dup_s = temp_dst;
	while (n != 0)
	{
		*dup_s = *s1;
		s1++;
		dup_s++;
		n--;
	}
	*dup_s = '\0';
	return (temp_dst);
}
