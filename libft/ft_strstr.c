/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <cmarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 20:49:10 by cmarin            #+#    #+#             */
/*   Updated: 2014/11/13 20:44:37 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		while (s1[i] == s2[j])
		{
			i++;
			j++;
			if (s2[j] == '\0')
			{
				return ((char*)s1 + (i - j));
			}
		}
		if (s1[i] == s2[0])
			i--;
		i++;
	}
	return (NULL);
}
