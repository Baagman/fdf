/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:47:59 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/07 16:15:56 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char *s, char (*f)(char))
{
	char	*temp_s;
	size_t	i;

	i = 0;
	if ((s == NULL) || (f == NULL))
		return (NULL);
	else
	{
		temp_s = ft_strnew(ft_strlen(s));
		if (temp_s == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			temp_s[i] = f(s[i]);
			i++;
		}
		return (temp_s);
	}
}
