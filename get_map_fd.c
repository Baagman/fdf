/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 10:29:15 by tbaagman          #+#    #+#             */
/*   Updated: 2018/08/17 10:41:26 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "fdf.h"
#include <fcntl.h>
#include <stdio.h>

int		get_map_fd(int argc, char **argv)
{
	int fd;

	if (argc != 2)
	{
		ft_putstr("Usage:");
		ft_putstr(argv[0]);
		ft_putendl(" <filename>");
		exit(1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error");
		exit(1);
	}
	if ((fd != -1) && (ft_strstr(argv[1], ".fdf") == NULL))
	{
		ft_putstr(argv[0]);
		ft_putendl(" <valid .fdf file>");
		exit(1);
	}
	return (fd);
}
