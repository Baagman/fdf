/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:40:09 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/07 14:27:56 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*malloc_mem;
	char	*temp_holder;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	malloc_mem = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	temp_holder = malloc_mem;
	if (malloc_mem == NULL)
		return (NULL);
	else
	{
		while (*s1 != '\0')
		{
			*temp_holder = *s1;
			s1++;
			temp_holder++;
		}
		while (*s2 != '\0')
		{
			*temp_holder = *s2;
			s2++;
			temp_holder++;
		}
		return (malloc_mem);
	}
}
