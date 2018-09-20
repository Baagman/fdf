/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 14:18:58 by tbaagman          #+#    #+#             */
/*   Updated: 2018/08/17 11:14:48 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "./libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <mlx.h>

int		clean_exit(int key_code, t_mlx *mlx)
{
	if (key_code == 53)
	{
		mlx_clear_window(mlx->mlx_ptr, mlx->win_ptr);
		mlx_destroy_window(mlx->mlx_ptr, mlx->win_ptr);
		ft_putendl_fd("Exiting", 1);
		free(mlx);
		exit(1);
	}
	return (0);
}

void	ft_check_line(char **points)
{
	static	size_t	line_len;
	size_t			count;

	count = 0;
	if (line_len == 0)
	{
		while (points[count] != NULL)
			count++;
		line_len = count;
	}
	else if ((line_len > 0) && (points != NULL))
	{
		while (points[count] != NULL)
			count++;
		if (count == line_len)
			return ;
		else if (count != line_len)
		{
			ft_putendl("Found wrong line length. Exiting");
			exit(1);
		}
	}
}
