/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 16:12:27 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/15 14:36:48 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*temp_s;
	unsigned int	i;

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
			temp_s[i] = f(i, s[i]);
			i++;
		}
		return (temp_s);
	}
}
