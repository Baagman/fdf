/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaagman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:11:09 by tbaagman          #+#    #+#             */
/*   Updated: 2018/07/26 17:01:11 by tbaagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int		ft_after_line_feed(char *str)
{
	int j;

	j = 0;
	while ((str[j] != '\0') && (str[j] != '\n'))
		j++;
	return (j);
}

int		ft_read_line(char **str, const int fd, char *buffer)
{
	int		ret;
	char	*temp;

	while (!ft_strchr(str[fd], '\n') && (ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		temp = str[fd];
		buffer[ret] = '\0';
		str[fd] = ft_strjoin(str[fd], buffer);
		if (str[fd] == NULL)
			return (-1);
		free(temp);
	}
	return (ret);
}

int		get_next_line(int const fd, char **line)
{
	char			*temp;
	int				i;
	int				ret;
	static char		*s[2147483647];
	char			buffer[BUFF_SIZE + 1];

	if (BUFF_SIZE < 1)
		return (-1);
	if ((line == NULL) || (fd < 0) || !(s[fd] = !s[fd] ? ft_strnew(1) : s[fd]))
		return (-1);
	ret = ft_read_line(s, fd, buffer);
	if (ret == -1)
		return (-1);
	i = ft_after_line_feed(s[fd]);
	*line = ft_strchr(s[fd], '\n') ? ft_strsub(s[fd], 0, i) : ft_strdup(s[fd]);
	if (ft_strchr((temp = s[fd]), '\n'))
	{
		s[fd] = ft_strsub(s[fd], i + 1, ft_strlen(s[fd]));
		free(temp);
	}
	else
		ft_strdel(&s[fd]);
	return (!s[fd] && ft_strlen(*line) == 0 ? 0 : 1);
}
