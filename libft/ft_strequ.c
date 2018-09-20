/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:37:02 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/06 10:54:21 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_strequ(char const *s1, char const *s2)
{
	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	else
	{
		if (ft_strcmp(s1, s2) == 0)
			return (1);
		else
			return (0);
	}
}
