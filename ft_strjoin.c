/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshields <hshields@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:19:51 by hshields          #+#    #+#             */
/*   Updated: 2022/02/28 15:37:05 by hshields         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{	
	size_t	i;
	size_t	j;
	char	*new;

	new = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) +1));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		new[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		new[j++] = s2[i];
		i++;
	}
	new[j] = '\0';
	return (new);
}
