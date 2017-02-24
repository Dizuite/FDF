/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <cmarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:03:55 by cmarin            #+#    #+#             */
/*   Updated: 2014/11/13 21:19:18 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*s1;
	const char	*s2;

	if (!src || !dst)
		return (NULL);
	s2 = src;
	s1 = dst;
	while (n--)
	{
		if (*s2 == c)
		{
			*s1++ = *s2++;
			return (s1);
		}
		*s1++ = *s2++;
	}
	return (NULL);
}
