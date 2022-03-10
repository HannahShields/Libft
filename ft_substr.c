/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshields <hshields@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:43:13 by hshields          #+#    #+#             */
/*   Updated: 2022/03/02 13:47:42 by hshields         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (!s)
		return (NULL);
	if (len >= ft_strlen(s))
		sub = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	else
		sub = (char *)malloc(sizeof(*s) * (len + 1));
	if (!sub)
		return (NULL);
	if (start > ft_strlen(s))
	{
		sub[0] = 0;
		return (sub);
	}
	i = 0;
	while (i < len && s[i + start] != 0)
	{
		sub[i] = s[i + start];
		i++;
	}
		sub[i] = 0;
	return (sub);
}
