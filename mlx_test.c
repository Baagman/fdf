/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:35:46 by tbaagman          #+#    #+#             */
/*   Updated: 2018/08/17 10:31:59 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <mlx.h>
#include "./libft/libft.h"
#include "fdf.h"

void	ft_melloc_err(void)
{
	ft_putendl("Malloc error: could not allocate memory");
	exit(1);
}

int		main(int argc, char **argv)
{
	t_mlx	*window;
	t_point point;
	t_util	util;
	int		fd;

	if ((window = (t_mlx *)malloc(sizeof(t_mlx))) == NULL)
		ft_melloc_err();
	fdf_init(window, &util);
	fd = get_map_fd(argc, argv);
	get_map(fd, &util, &point);
	position(&util, &point, 1, 1);
	render(window, &point);
	mlx_key_hook(window->win_ptr, clean_exit, window);
	mlx_loop(window->mlx_ptr);
	return (0);
}
