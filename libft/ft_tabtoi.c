/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabtoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 19:32:30 by cmarin            #+#    #+#             */
/*   Updated: 2016/09/29 16:23:48 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	*ft_tabtoi(char **tab)
{
	int		i;
	float	*tabi;

	i = 0;
	tabi = (float *)malloc(sizeof(float) * ft_tablen(tab));
	while (tab[i] != '\0')
	{
		tabi[i] = ft_atoi(tab[i]);
		i++;
	}
	return (tabi);
}
