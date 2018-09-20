/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 14:02:44 by tbaagman          #+#    #+#             */
/*   Updated: 2018/08/17 11:05:02 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H


typedef struct		s_point
{
	int				x;
	int				y;
	int				h;
	unsigned int	index;
	int             color;
	struct s_point	*next;
}					t_point;

typedef struct		s_util
{
	int				x_increment;
	int				y_increment;
	int				size_x;
	int				size_y;
	int				zoom;
	int				scale;
}					t_util;

typedef struct		s_mlx
{
	void			*mlx_ptr;
	void			*win_ptr;
	int				wind_y;
	int				wind_x;
	t_point			*points;
}					t_mlx;

t_point				*lst_new_point(int x, int y, int z, unsigned int index);
t_point				*find_next_point(t_point *point, unsigned int index);
int					clean_exit(int key_code, t_mlx *mlx);
int					get_map_fd(int argc, char **argv);
void				get_map(const int fd, t_util *util, t_point *point);
void				fdf_init(t_mlx *mlx, t_util *util);
void				put_pixel(int x, int y, t_mlx *mlx, int color);
void				draw(t_point point, t_point point1, t_mlx *mlx);
void				position(t_util *util, t_point *point, int zoom, int scale);
void				render(t_mlx *mlx, t_point *temp);
void				new_window(t_mlx *mlx);
void                set_color(char *str, t_point *point);
void				free_ptr(char *s1, char **s2);
void				free_points(t_point *point);
void				ft_check_line(char **points);

#endif
