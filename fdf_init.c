/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 10:45:12 by tbaagman          #+#    #+#             */
/*   Updated: 2018/08/17 10:26:24 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "./libft/libft.h"
#include <stdlib.h>
#include <mlx.h>

void	fdf_init(t_mlx *wind, t_util *util)
{
	wind->mlx_ptr = mlx_init();
	if (wind->mlx_ptr == NULL)
	{
		ft_putendl("Cannot initialize a connection");
		exit(1);
	}
	util->x_increment = 0;
	util->y_increment = 0;
}

void	new_window(t_mlx *mlx)
{
	int	x;
	int	y;

	mlx->wind_x = 1600;
	mlx->wind_y = 900;
	x = mlx->wind_x;
	y = mlx->wind_y;
	mlx->win_ptr = mlx_new_window(mlx->mlx_ptr, x, y, "fdf");
	if (mlx->win_ptr == NULL)
	{
		ft_putendl("Cannot create new window");
		exit(1);
	}
}

void	free_points(t_point *point)
{
	if (point != NULL)
	{
		while (point->next != NULL)
		{
			free(point);
			point = point->next;
		}
	}
}
