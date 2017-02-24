/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <cmarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:16:55 by cmarin            #+#    #+#             */
/*   Updated: 2016/09/29 16:08:31 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int j;
	int m;

	j = 0;
	m = 0;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\v' || *nptr == '\t'
			|| *nptr == '\r' || *nptr == '\f')
		nptr++;
	if (*nptr == '+')
		nptr++;
	else if (*nptr == '-')
	{
		nptr++;
		m++;
	}
	while (*nptr == '0')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		j = j * 10 + *nptr - '0';
		nptr++;
	}
	if (m == 1)
		j = -j;
	return (j);
}
