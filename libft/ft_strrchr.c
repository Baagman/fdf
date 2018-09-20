/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 16:33:53 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/11 10:44:53 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *temp_s;

	temp_s = (char *)s;
	if (ft_strchr(s, c) == NULL)
		return (NULL);
	while (*temp_s != '\0')
		temp_s++;
	while (*temp_s != c)
		temp_s--;
	return (temp_s);
}
