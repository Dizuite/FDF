/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 13:33:34 by cmarin            #+#    #+#             */
/*   Updated: 2016/09/29 18:04:05 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

char	*ft_filetostr(char *readit)
{
	char	*str;
	char	*tmp;
	int		fd;
	int		gnl;
	char	*backn;

	backn = ft_strdup("\n");
	gnl = 1;
	str = ft_strnew(0);
	fd = open(readit, O_RDONLY);
	if (fd == -1)
		ft_exit(0);
	while (gnl != 0)
	{
		gnl = get_next_line(fd, &tmp);
		if (gnl == -1)
			ft_exit(1);
		if (str[0] != '\0')
			str = ft_strjoin(str, backn);
		str = ft_strjoin(str, tmp);
	}
	return (str);
}

t_map	ft_strtotabi(char *str)
{
	char	**tabline;
	float	**tabi;
	t_map	map;
	size_t	i;

	i = 0;
	tabline = ft_strsplit(str, '\n');
	map.y = ft_tablen(tabline);
	map.x = ft_tablen(ft_strsplit(tabline[i], ' '));
	tabi = (float **)malloc(sizeof(float *) * map.y);
	while (i != map.y)
	{
		if (ft_tablen(ft_strsplit(tabline[i], ' ')) != map.x)
			ft_exit(3);
		tabi[i] = ft_tabtoi(ft_strsplit(tabline[i], ' '));
		i++;
	}
	map.map = tabi;
	map.z1 = 15;
	map.z2 = 6;
	map.z3 = 5;
	map.h = 2;
	map.ox = SIZE / 4;
	map.oy = SIZE / 4;
	return (map);
}

void	ft_checkstr(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		ft_exit(8);
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			if (str[i] != '\n')
				if (str[i] != '-')
					if (str[i] != ' ')
						ft_exit(2);
		i++;
	}
}

void	ft_checknbinmap(t_map map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j != map.y)
	{
		while (i != map.x)
		{
			if (map.map[j][i] > 1000000)
				ft_exit(4);
			else if (map.map[j][i] < -1000000)
				ft_exit(5);
			i++;
		}
		i = 0;
		j++;
	}
}

t_map	ft_parsing(char *arg)
{
	char	*str;
	t_map	map;

	str = ft_filetostr(arg);
	ft_checkstr(str);
	map = ft_strtotabi(str);
	ft_checknbinmap(map);
	return (map);
}
