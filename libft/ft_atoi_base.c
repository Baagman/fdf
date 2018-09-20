/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:42:23 by tbaagman          #+#    #+#             */
/*   Updated: 2018/08/15 17:19:57 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isinbase(char c, int base)
{
	if ((base <= 10) && (ft_isdigit(c) == 1))
		return (1);
	else if ((base <= 16) && ((c >= 'a') || (c <= 'f')))
		return (1);
	else if ((base <= 16) && ((c >= 'A') || (c <= 'F')))
		return (1);
	else
		return (0);
}

void	end_space(const char *str, int *i)
{
	while (ft_isspace(str[*i]) == 1)
		*i = *i + 1;
}

int		ft_issigned(int i, char c, int *sign)
{
	if ((c == '-') || (c == '+'))
	{
		if (c == '-')
		{
			i++;
			*sign *= -1;
		}
	}
	return (i);
}

int		ft_atoi_base(const char *str, int base)
{
	int		results;
	int		sign;
	int		i;

	i = 0;
	results = 0;
	sign = 1;
	if ((str == NULL) || (base < 2) || (base > 16))
		return (0);
	end_space(str, &i);
	i = ft_issigned(i, str[i], &sign);
	while ((str[i] != '\0') && (ft_isinbase(str[i], base) == 1))
	{
		if (ft_isdigit(str[i]) == 1)
			results = (results * base) + (str[i] - '0');
		else if (ft_islower(str[i]) == 1)
			results = (results * base) + (str[i] - 'a' + 10);
		else if (ft_isupper(str[i]) == 1)
			results = (results * base) + (str[i] - 'A' + 10);
		i++;
	}
	return (results * sign);
}
