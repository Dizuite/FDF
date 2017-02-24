/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <cmarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 20:30:16 by cmarin            #+#    #+#             */
/*   Updated: 2016/03/17 19:00:24 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_nbrlen(int n)
{
	int	i;

	i = -1;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_special(int n)
{
	char	*str;

	if (n == -2147483648)
	{
		str = ft_strnew(10);
		str = ft_itoa(1214748364);
		str[0] = '-';
		str[10] = '8';
		str[11] = '\0';
	}
	if (n == 0)
	{
		str = ft_strnew(1);
		str[0] = '0';
		str[1] = '\0';
	}
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == -2147483648 || n == 0)
	{
		str = ft_special(n);
		return (str);
	}
	i = ft_nbrlen(n);
	str = ft_strnew(i);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (i != -1 && str[i] != '-')
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (str);
}
