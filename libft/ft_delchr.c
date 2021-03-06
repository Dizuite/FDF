/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <cmarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 14:40:22 by cmarin            #+#    #+#             */
/*   Updated: 2015/01/28 16:40:37 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_delchr(char *str, int i)
{
	while (str[i] != '\0')
	{
		str[i] = str[i + 1];
		i++;
	}
	return (str);
}
