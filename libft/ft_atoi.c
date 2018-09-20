/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:48:21 by tbaagman          #+#    #+#             */
/*   Updated: 2018/06/14 12:20:37 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** atoi converts a string to an integer, it ignores the space in the string **
** checks for the sign of the int return num if it is positive or negative
** while the str is true for isdigit then it takes the char at that address
** converts it to ascii and then subtracts it so that it becomes an int **
** eg if *str == 1 and 1 == 049 in ascii then it would subtract 0, which
** is 048 in ascii ,049 - 048 which is equal to 1,but when we start the loop **
** our number is zero so (num = num + 1) == 0 = 0 + 1 == 1, we then move on **
** to the next char in memory and check the loop condition, if it is true then,
** continue and repeats the process of converting *str to ascii **
** and subtracting to get the actual int number **
** do this while isdigit is true and str is not equal to the string terminator
** when the loop ends the multiply num with the correct sign **
*/

int		ft_atoi(const char *str)
{
	int			sign;
	long int	num;

	sign = 1;
	num = 0;
	while (ft_isspace(*str) != 0)
		str++;
	if ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while ((*str != '\0') && (ft_isdigit(*str) != 0))
	{
		if ((num > 2147483647) && (sign == 1))
			return (-1);
		if ((num > 2147483647) && (sign == -1))
			return (0);
		num *= 10;
		num = num + (*str - '0');
		str++;
	}
	return (sign * (int)num);
}
