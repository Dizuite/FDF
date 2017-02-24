/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <cmarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 19:50:58 by cmarin            #+#    #+#             */
/*   Updated: 2014/11/25 18:56:47 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	size_t			a;
	void			*ptr;

	s1 = (unsigned char *)s;
	a = 0;
	ptr = 0;
	if (s && n)
	{
		while (a < n && !ptr)
		{
			if (s1[a] == (unsigned char)c)
				ptr = &s1[a];
			a++;
		}
	}
	return (ptr);
}
