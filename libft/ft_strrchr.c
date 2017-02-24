/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <cmarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 22:09:14 by cmarin            #+#    #+#             */
/*   Updated: 2014/11/09 22:51:00 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			j = i;
		}
		i++;
	}
	if (c == 0)
		return ((char *)s + (i));
	if (j != 0)
		return ((char *)s + (j));
	else if (s[0] == c)
		return ((char *)s + (j));
	return (NULL);
}
