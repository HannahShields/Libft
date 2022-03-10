/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshields <hshields@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:58:19 by hshields          #+#    #+#             */
/*   Updated: 2022/02/16 15:04:58 by hshields         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_needle;
	char	*wheat;

	if (haystack == needle)
		return ((char *)haystack);
	i = 0;
	len_needle = ft_strlen(needle);
	wheat = (char *)haystack;
	if (len_needle == 0)
		return (wheat);
	while (wheat[i] && i < len)
	{
		if (wheat[i] == needle[0])
		{
			j = 0;
			while (wheat[i + j] && wheat[i + j] == needle[j] && i + j < len)
				j++;
			if (j == len_needle)
				return (&wheat[i]);
		}
		i++;
	}
	return (NULL);
}
