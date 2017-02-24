/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <cmarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/02 13:38:16 by cmarin            #+#    #+#             */
/*   Updated: 2016/09/29 18:03:52 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		found_backn(const char *stock)
{
	int i;

	if (!stock)
		return (0);
	i = 0;
	while (stock[i] != '\0')
	{
		if (stock[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int		ft_read_stock(char *stock, char **line)
{
	int		i;
	int		j;

	line[0] = ft_strdupchr(stock, '\n');
	i = ft_strlen(*line);
	j = ft_strlen(stock);
	if (found_backn(stock) == 0)
		stock[0] = '\0';
	else
		stock = (char *)ft_memmove(stock, stock + (i + 1), j - i);
	return (1);
}

int		get_next_line(int fd, char **line)
{
	static char	*stock[255];
	char		buf[BUFF_SIZE + 1];
	int			r;
	int			fbn;

	!stock[fd] ? (stock[fd] = ft_strnew(0)) : 0;
	if ((line == NULL || fd < 0) || (fbn = 0))
		return (-1);
	*line = ft_strnew(BUFF_SIZE + 1);
	while (fbn == 0)
	{
		r = read(fd, buf, BUFF_SIZE);
		if (r == -1)
			return (-1);
		if (r == 0)
		{
			if (stock[fd][0] == '\0')
				return (0);
			break ;
		}
		buf[r] = '\0';
		stock[fd] = ft_strjoin(stock[fd], buf);
		fbn = found_backn(stock[fd]);
	}
	return (ft_read_stock(stock[fd], line));
}
