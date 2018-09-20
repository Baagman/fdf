/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 11:58:54 by tbaagman          #+#    #+#             */
/*   Updated: 2018/08/17 11:09:44 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <math.h>
#include <stdlib.h>
#include "fdf.h"

void	put_pixel(int x, int y, t_mlx *mlx, int color)
{
	int temp_x;
	int temp_y;

	temp_x = (mlx->wind_x / 6) + x;
	temp_y = mlx->wind_y + y;
	mlx_pixel_put(mlx->mlx_ptr, mlx->win_ptr, temp_x, temp_y / sqrt(3), color);
}

void	position(t_util *util, t_point *point, int zoom, int scale)
{
	if ((util->size_x <= 30) || (util->size_y <= 40))
	{
		util->zoom = 10;
		util->scale = 4;
	}
	else
	{
		util->zoom = 2;
		zoom = 1;
		util->scale = 1;
	}
	while (point != NULL)
	{
		point->x /= zoom;
		point->y = (point->y + point->h) / zoom;
		point->h /= scale;
		point->x *= util->zoom;
		point->y = (point->y - point->h) * util->zoom;
		point->h *= util->scale;
		point = point->next;
	}
}

void	draw(t_point point, t_point point1, t_mlx *mlx)
{
	t_point delta;
	t_util	increments;
	int		err;
	int		err2;

	delta.x = abs(point1.x - point.x);
	delta.y = abs(point1.y - point.y);
	increments.x_increment = (point.x < point1.x ? 1 : -1);
	increments.y_increment = (point.y < point1.y ? 1 : -1);
	err = delta.x - delta.y;
	while ((point.x != point1.x) || (point.y != point1.y))
	{
		put_pixel(point.x, point.y, mlx, point.color);
		err2 = 2 * err;
		if (err2 > -delta.x)
		{
			point.x += increments.x_increment;
			err -= delta.y;
		}
		if (err2 < delta.y)
		{
			point.y += increments.y_increment;
			err += delta.x;
		}
	}
}

void	render(t_mlx *mlx, t_point *temp)
{
	t_point *next;

	new_window(mlx);
	while (temp != NULL)
	{
		if ((temp->next != NULL) && (temp->index + 1 == temp->next->index))
			draw(*temp, *temp->next, mlx);
		next = find_next_point(temp->next, temp->index);
		if (next != NULL)
			draw(*temp, *next, mlx);
		temp = temp->next;
	}
}
