/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <cmarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 20:09:44 by cmarin            #+#    #+#             */
/*   Updated: 2015/01/28 12:59:49 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == NULL)
		str = ft_strdup((char *)s2);
	if (s2 == NULL)
		str = ft_strdup((char *)s1);
	if (s1 == NULL || s2 == NULL)
		return (str);
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
