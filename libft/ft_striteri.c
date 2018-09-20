/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:13:33 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/14 14:59:12 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i;

	i = 0;
	if ((s == NULL) || (f == NULL))
		return ;
	else
	{
		while (*s != '\0')
		{
			f(i, s);
			i++;
			s++;
		}
	}
}
