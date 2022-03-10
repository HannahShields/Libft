/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshields <hshields@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:43:21 by hshields          #+#    #+#             */
/*   Updated: 2022/02/15 12:00:30 by hshields         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (*p != '\0')
	{	
		if (*p == (char)c)
			return (p);
		p++;
	}
	if (*p == '\0' && (char)c == '\0')
		return (p);
	return (0);
}
