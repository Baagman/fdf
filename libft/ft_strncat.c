/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 09:06:18 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/13 14:21:56 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	counter1;
	size_t	counter2;

	counter1 = 0;
	counter2 = 0;
	while (s1[counter1] != '\0')
		counter1++;
	while ((counter2 < n) && (s2[counter2] != '\0'))
	{
		s1[counter1] = s2[counter2];
		counter1++;
		counter2++;
	}
	if ((s2[counter2] == '\0') || (s2[counter2] != '\0'))
		s1[counter1] = '\0';
	return (s1);
}
