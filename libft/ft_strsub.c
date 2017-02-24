/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <cmarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 18:08:48 by cmarin            #+#    #+#             */
/*   Updated: 2015/01/05 18:14:49 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	str = ft_strnew(len);
	if (str)
	{
		i = 0;
		while (s[start] && i < len)
		{
			str[i] = s[start];
			start++;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
