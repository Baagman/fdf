/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 10:29:15 by tbaagman          #+#    #+#             */
/*   Updated: 2018/08/17 11:17:24 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "fdf.h"
#include <fcntl.h>
#include <unistd.h>

t_point	*lst_new_point(int x, int y, int z, unsigned int index)
{
	t_point *new_point;

	new_point = (t_point *)malloc(sizeof(t_point));
	if (new_point == NULL)
		return (NULL);
	else
	{
		new_point->x = x;
		new_point->y = y - z;
		new_point->h = z;
		new_point->index = index;
		new_point->color = 0xFFFFFF;
	}
	new_point->next = NULL;
	return (new_point);
}

void	get_map(const int fd, t_util *util, t_point *point)
{
	char	*line;
	char	*color;
	char	**temp;
	int		i;
	int		y;

	y = 0;
	while ((get_next_line(fd, &line) > 0))
	{
		temp = ft_strsplit(line, ' ');
		i = 0;
		while (temp[i] != NULL)
		{
			point->next = lst_new_point(i + y, y - i, ft_atoi(temp[i]), i);
			point = point->next;
			if ((color = ft_strchr(temp[i], ',')) != NULL)
				set_color(color, point);
			i++;
		}
		ft_check_line(temp);
		free_ptr(line, temp);
		y++;
	}
	util->size_x = i;
	util->size_y = y;
}

t_point	*find_next_point(t_point *point, unsigned int index)
{
	while (point != NULL)
	{
		if (point->index == index)
			return (point);
		point = point->next;
	}
	return (NULL);
}

void	set_color(char *str_color, t_point *point)
{
	char *my_color;

	my_color = ft_strstr(str_color, "0x");
	if (my_color != NULL)
		point->color = ft_atoi_base(my_color, 16);
}

void	free_ptr(char *line, char **temp)
{
	free(line);
	free(temp);
}
