/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 11:52:21 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/15 11:00:18 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	char	ft_return_char(int *n)
{
	char re;

	re = (*n % 10) + '0';
	*n /= 10;
	return (re);
}

/*
** If n is negative it should increase the number of chars by 1
** And make n positve so that we'll deal with positve numbers,
** Because its easier to deal with positve numbers than negative
*/

static	void	ft_is_negative(int *n, size_t *num_chars, int *sign)
{
	*sign = -1;
	*num_chars = *num_chars + 1;
	*n = *n * (-1);
}

/*
** Returns the number of characters that might be in the int n
** whilst its not eqaul to zero
*/

static	void	ft_num_chars(int n, size_t *num_chars)
{
	while (n != 0)
	{
		*num_chars = *num_chars + 1;
		n /= 10;
	}
}

char			*ft_itoa(int n)
{
	char	*s_n;
	int		sign;
	int		i;
	int		temp_n;
	size_t	num_chars;

	num_chars = 0;
	if (n < 0)
		ft_is_negative(&n, &num_chars, &sign);
	temp_n = n;
	if (n < -2147483647)
		s_n = ft_strdup("-2147483648");
	else if (n == 0)
		s_n = ft_strdup("0");
	else
	{
		ft_num_chars(temp_n, &num_chars);
		if ((s_n = ft_strnew(num_chars)) == NULL)
			return (NULL);
		sign == -1 ? s_n[0] = '-' : s_n[0];
		i = num_chars - 1;
		while (n != 0)
			s_n[i--] = ft_return_char(&n);
	}
	return (s_n);
}
