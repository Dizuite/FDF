/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 15:04:18 by cmarin            #+#    #+#             */
/*   Updated: 2016/09/29 12:14:07 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	ft_putpxl(void *img, int x, int y)
{
	char	*pxl_img;
	int		bpp;
	int		s_line;
	int		ed;
	int		nb;

	pxl_img = mlx_get_data_addr(img, &bpp, &s_line, &ed);
	nb = x * bpp / 8 + y * s_line;
	if (x < SIZE && y < SIZE && x > 0 && y > 0)
	{
		pxl_img[nb] = 255;
		pxl_img[nb + 1] = 255;
		pxl_img[nb + 2] = 255;
	}
}

t_coord	ft_step2pnr(t_coord crd, float cd)
{
	if (crd.y1 < crd.y2)
	{
		if (cd > crd.tcd)
			crd.y1++;
		else
			crd.x1--;
	}
	else if (crd.y1 > crd.y2)
	{
		if (cd > crd.tcd)
			crd.x1--;
		else
			crd.y1--;
	}
	return (crd);
}

t_coord	ft_step1pnr(t_coord crd, float cd)
{
	if (crd.y1 < crd.y2)
	{
		if (cd > crd.tcd)
			crd.x1++;
		else
			crd.y1++;
	}
	else if (crd.y1 > crd.y2)
	{
		if (cd < crd.tcd)
			crd.x1++;
		else
			crd.y1--;
	}
	return (crd);
}

t_coord	ft_pixnrun(t_coord crd)
{
	float	cd;

	cd = (float)(crd.x1 - crd.x2) / (float)(crd.y1 - crd.y2);
	if (crd.x1 == crd.x2)
	{
		if (crd.y1 < crd.y2)
			crd.y1++;
		else if (crd.y1 > crd.y2)
			crd.y1--;
	}
	else if (crd.y1 == crd.y2)
	{
		if (crd.x1 < crd.x2)
			crd.x1++;
		else if (crd.x1 > crd.x2)
			crd.x1--;
	}
	else if (crd.x1 < crd.x2)
		crd = ft_step1pnr(crd, cd);
	else if (crd.x1 > crd.x2)
		crd = ft_step2pnr(crd, cd);
	return (crd);
}

void	ft_line(t_coord crd, t_mlx mlx)
{
	crd.tcd = (float)(crd.x1 - crd.x2) / (float)(crd.y1 - crd.y2);
	while ((crd.x1 == crd.x2 && crd.y1 == crd.y2) == 0)
	{
		crd = ft_pixnrun(crd);
		ft_putpxl(mlx.img, crd.x1, crd.y1);
	}
}
