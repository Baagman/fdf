/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 12:52:13 by tbaagman          #+#    #+#             */
/*   Updated: 2018/05/29 08:40:59 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		legnth_s;
	char	*temp_dst;
	char	*dup_s;

	legnth_s = ft_strlen(s) + 1;
	temp_dst = (char *)malloc(legnth_s);
	dup_s = temp_dst;
	if (temp_dst == NULL)
		return (NULL);
	while (*s != '\0')
	{
		*dup_s = *s;
		dup_s++;
		s++;
	}
	*dup_s = '\0';
	return (temp_dst);
}
