/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 18:21:12 by cmarin            #+#    #+#             */
/*   Updated: 2016/09/29 18:30:57 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_partnb(const char *str, char c)
{
	int	i;
	int	sub;

	sub = 0;
	i = 0;
	while (*str != '\0')
	{
		if (sub == 1 && *str == c)
			sub = 0;
		if (sub == 0 && *str != c)
		{
			sub = 1;
			i++;
		}
		str++;
	}
	return (i);
}

int		ft_hlong(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str != c && *str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**t;
	int		nb;
	int		i;

	i = 0;
	nb = ft_partnb((const char *)s, c);
	t = (char **)malloc(sizeof(*t) * (ft_partnb((const char *)s, c) + 1));
	if (t == NULL)
		return (NULL);
	while (nb--)
	{
		while (*s == c && *s != '\0')
			s++;
		t[i] = ft_strsub((const char *)s, 0, ft_hlong((const char *)s, c));
		if (t[i] == NULL)
			return (NULL);
		s = s + ft_hlong(s, c);
		i++;
	}
	t[i] = NULL;
	return (t);
}
