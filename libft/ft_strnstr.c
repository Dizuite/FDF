/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <cmarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:25:26 by cmarin            #+#    #+#             */
/*   Updated: 2014/11/09 17:34:17 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (i < n && s1[i] != '\0')
	{
		j = 0;
		while (i < n && s1[i] == s2[j])
		{
			i++;
			j++;
			if (s2[j] == '\0')
			{
				return ((char *)s1 + (i - j));
			}
		}
		i++;
	}
	return (NULL);
}
