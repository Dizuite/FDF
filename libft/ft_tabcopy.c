/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcopy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/25 18:15:41 by cmarin            #+#    #+#             */
/*   Updated: 2016/05/27 16:46:44 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tabcopy(char **src)
{
	char	**dst;
	int		i;

	i = 0;
	while (src[i] != NULL)
		i++;
	dst = (char **)malloc(sizeof(char *) * i + 1);
	i = 0;
	while (src[i] != NULL)
	{
		dst[i] = ft_strdup(src[i]);
		i++;
	}
	dst[i] = NULL;
	return (dst);
}
