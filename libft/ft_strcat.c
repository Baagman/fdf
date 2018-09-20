/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:53:00 by tbaagman          #+#    #+#             */
/*   Updated: 2018/05/23 10:55:12 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int counter_one;
	int counter_two;

	counter_one = ft_strlen(s1);
	counter_two = 0;
	while (s2[counter_two] != '\0')
	{
		s1[counter_one] = s2[counter_two];
		counter_one++;
		counter_two++;
	}
	s1[counter_one] = '\0';
	return (s1);
}
