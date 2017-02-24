/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarin <cmarin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 21:58:25 by cmarin            #+#    #+#             */
/*   Updated: 2014/11/25 17:52:10 by cmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	str = ft_strnew(ft_strlen(s));
	ft_strcpy(str, s);
	while (42)
	{
		if (str[0] == ' ' || str[0] == '\n' || str[0] == '\t')
		{
			i = -1;
			while (str[++i] != '\0')
				str[i] = str[i + 1];
		}
		else if (str[ft_strlen(str) - 1] == ' ' ||
				str[ft_strlen(str) - 1] == '\n' ||
				str[ft_strlen(str) - 1] == '\t')
			str[ft_strlen(str) - 1] = '\0';
		else
			return (str);
	}
}
