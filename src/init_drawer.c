/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_drawer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 17:05:45 by cmarin            #+#    #+#             */
/*   Updated: 2016/09/29 18:13:38 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	ft_key2(int key, t_mlx *mlx)
{
	if (key == 13)
		mlx->map.oy -= 20;
	else if (key == 1)
		mlx->map.oy += 20;
	else if (key == 53)
		exit(0);
	mlx_destroy_image(mlx->mlx, mlx->img);
	mlx->img = mlx_new_image(mlx->mlx, SIZE, SIZE);
	ft_draw(mlx->map, *mlx);
	mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->img, 0, 0);
}

int		ft_key(int key, t_mlx *mlx)
{
	if (key == 69)
	{
		mlx->map.z1 += 15;
		mlx->map.z2 += 6;
		mlx->map.z3 += 5;
	}
	else if (key == 78)
	{
		mlx->map.z1 -= 15;
		mlx->map.z2 -= 6;
		mlx->map.z3 -= 5;
	}
	else if (key == 126)
		mlx->map.h += 1;
	else if (key == 125)
		mlx->map.h -= 1;
	else if (key == 0)
		mlx->map.ox -= 20;
	else if (key == 2)
		mlx->map.ox += 20;
	ft_key2(key, mlx);
	return (1);
}

int		ft_redcross(char *null)
{
	(void)null;
	exit(0);
}

void	ft_init_draw(t_map map)
{
	t_mlx	mlx;

	mlx.mlx = mlx_init();
	mlx.win = mlx_new_window(mlx.mlx, SIZE, SIZE, "fdf");
	mlx.img = mlx_new_image(mlx.mlx, SIZE, SIZE);
	mlx.map = map;
	ft_draw(map, mlx);
	mlx_put_image_to_window(mlx.mlx, mlx.win, mlx.img, 0, 0);
	mlx_key_hook(mlx.win, ft_key, &mlx);
	mlx_hook(mlx.win, 17, (1L << 17), ft_redcross, NULL);
	mlx_loop(mlx.mlx);
}
