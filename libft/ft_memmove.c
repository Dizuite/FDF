/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <cmarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 16:26:43 by cmarin            #+#    #+#             */
/*   Updated: 2015/01/28 17:13:55 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;

	if (!dst || !src)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * len);
	ft_strncpy(tmp, src, len);
	ft_strncpy(dst, tmp, len);
	free(tmp);
	return (dst);
}
