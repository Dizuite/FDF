/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <cmarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 18:39:58 by cmarin            #+#    #+#             */
/*   Updated: 2014/11/18 23:39:47 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	i = 0;
	if (s && f)
	{
		s2 = ft_strnew(ft_strlen(s));
		while (s[i])
		{
			s2[i] = f(i, s[i]);
			i++;
		}
		return (s2);
	}
	return (NULL);
}
