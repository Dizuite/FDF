/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 15:21:59 by cmarin            #+#    #+#             */
/*   Updated: 2016/09/29 17:23:48 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

t_coord	ft_crd_r(int x, int y, t_coord crd, t_map map)
{
	crd.x1 = crd.x2;
	crd.y1 = crd.y2;
	crd.x2 = crd.x1 + map.z1;
	crd.y2 = crd.y1 + map.z3;
	crd.y2 = crd.y2 - (map.map[y][x + 1] * map.h) + (map.map[y][x] * map.h);
	return (crd);
}

t_coord	ft_crd_d(int x, int y, t_coord crd, t_map map)
{
	crd.x1 = crd.x2;
	crd.y1 = crd.y2;
	crd.x2 = crd.x1 - map.z2;
	crd.y2 = crd.y1 + map.z3;
	crd.y2 = crd.y2 - (map.map[y + 1][x] * map.h) + (map.map[y][x] * map.h);
	return (crd);
}

void	ft_draw2(t_map map, t_mlx mlx)
{
	int		x;
	int		y;
	t_coord	crd;

	x = 0;
	y = 0;
	crd.x2 = map.ox;
	crd.y2 = map.oy - map.map[y][x] * map.h;
	while (x != map.x)
	{
		while (y != map.y - 1)
		{
			crd = ft_crd_d(x, y, crd, map);
			ft_line(crd, mlx);
			y++;
		}
		crd.x2 = map.ox + map.z1 * (x + 1);
		if (x + 1 != map.x)
			crd.y2 = (map.oy + map.z3 * (x + 1)) - (map.map[0][x + 1] * map.h);
		y = 0;
		x++;
	}
}

void	ft_draw(t_map map, t_mlx mlx)
{
	int		x;
	int		y;
	t_coord	crd;

	x = 0;
	y = 0;
	crd.x2 = map.ox;
	crd.y2 = map.oy - (map.map[y][x] * map.h);
	while (y != map.y)
	{
		while (x != map.x - 1)
		{
			crd = ft_crd_r(x, y, crd, map);
			ft_line(crd, mlx);
			x++;
		}
		crd.x2 = map.ox - map.z2 * (y + 1);
		if (y + 1 != map.y)
			crd.y2 = (map.oy + map.z3 * (y + 1)) - (map.map[y + 1][0] * map.h);
		x = 0;
		y++;
	}
	ft_draw2(map, mlx);
}
