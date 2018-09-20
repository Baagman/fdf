/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:23:22 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/15 11:10:45 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		n_isspace(int c)
{
	if ((c == '\n') || (c == ' ') || (c == '\t'))
		return (1);
	else
		return (0);
}

char			*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		j;
	size_t		len;
	char		*temp_s;

	if (s == NULL)
		return (NULL);
	else
	{
		i = 0;
		j = 0;
		len = ft_strlen(s) - 1;
		while ((n_isspace(s[i]) != 0) && (s[i] != '\0'))
			i++;
		if (s[i] == '\0')
			return (ft_strdup(""));
		while (n_isspace(s[len]) != 0)
			len--;
		if (!(temp_s = ft_strnew((len - i) + 1)))
			return (NULL);
		while (i <= len)
			temp_s[j++] = s[i++];
		temp_s[j] = '\0';
		return (temp_s);
	}
}
