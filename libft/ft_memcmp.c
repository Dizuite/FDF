/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <cmarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 11:53:46 by cmarin            #+#    #+#             */
/*   Updated: 2014/11/25 18:56:45 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	if (s1 && s2)
	{
		c1 = (unsigned char *)s1;
		c2 = (unsigned char *)s2;
		while (n > i)
		{
			if (c1[i] != c2[i])
				return (c1[i] - c2[i]);
			i++;
		}
	}
	return (0);
}
