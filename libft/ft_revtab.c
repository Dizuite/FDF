/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 18:09:17 by cmarin            #+#    #+#             */
/*   Updated: 2016/05/12 18:15:42 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_revtab(char **tab)
{
	char	*swp;
	int		i;
	int		j;

	if (tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (tab[j] != NULL)
		j++;
	j--;
	while (i < j)
	{
		swp = tab[i];
		tab[i++] = tab[j];
		tab[j--] = swp;
	}
	return (tab);
}
