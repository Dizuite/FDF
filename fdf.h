/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 14:38:45 by cmarin            #+#    #+#             */
/*   Updated: 2016/09/29 17:25:50 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft/libft.h"
# include "mlx.h"
# include <stdio.h>
# include <fcntl.h>
# include <math.h>

# define SIZE 1200

typedef struct	s_coord
{
	int		x1;
	int		y1;
	int		x2;
	int		y2;
	float	tcd;
}				t_coord;

typedef	struct	s_map
{
	float	z1;
	float	z2;
	float	z3;
	float	h;
	float	ox;
	float	oy;
	float	x;
	float	y;
	float	**map;
}				t_map;

typedef struct	s_mlx
{
	void	*mlx;
	void	*win;
	void	*img;
	t_map	map;
}				t_mlx;

void			ft_init_draw(t_map map);
void			ft_line(t_coord crd, t_mlx mlx);
void			ft_exit(int i);
void			ft_draw(t_map map, t_mlx mlx);
void			ft_init_draw(t_map map);
t_map			ft_parsing(char *arg);

#endif
