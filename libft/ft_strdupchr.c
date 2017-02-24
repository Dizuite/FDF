/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <cmarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 19:54:03 by cmarin            #+#    #+#             */
/*   Updated: 2015/02/02 15:31:47 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdupchr(const char *s1, char c)
{
	char	*s2;
	int		i;

	i = 0;
	while (s1[i] != c && s1[i] != '\0')
		i++;
	s2 = (char *)malloc(sizeof(char) * i + 1);
	i = 0;
	while (s1[i] != c && s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
