/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 14:22:00 by cmarin            #+#    #+#             */
/*   Updated: 2016/09/29 17:43:34 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	ft_exit(int i)
{
	if (i == 0)
		ft_putendl("File does not exist");
	if (i == 1)
		ft_putendl("File cannot be read");
	if (i == 2)
		ft_putendl("Invalid file");
	if (i == 3)
		ft_putendl("Not a rectangular map");
	if (i == 4)
		ft_putendl("Too large value in map");
	if (i == 5)
		ft_putendl("Too few value in map");
	if (i == 6)
		ft_putendl("Not a .fdf file");
	if (i == 7)
		ft_putendl("No file added");
	if (i == 8)
		ft_putendl("Empty map");
	exit(0);
}

void	ft_checkfilename(char *file)
{
	int	i;

	i = ft_strlen(file);
	if (i < 4)
		ft_exit(6);
	else if (file[i - 1] != 'f')
		ft_exit(6);
	else if (file[i - 2] != 'd')
		ft_exit(6);
	else if (file[i - 3] != 'f')
		ft_exit(6);
	else if (file[i - 4] != '.')
		ft_exit(6);
}

int		main(int argc, char **argv)
{
	t_map	map;

	if (argc != 2)
		ft_exit(7);
	ft_checkfilename(argv[1]);
	map = ft_parsing(argv[1]);
	ft_init_draw(map);
	return (0);
}
