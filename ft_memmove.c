/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshields <hshields@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:53:15 by hshields          #+#    #+#             */
/*   Updated: 2022/02/10 11:20:13 by hshields         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*psrc;
	char		*pdest;

	psrc = (const char *)src;
	pdest = (char *)dest;
	if ((dest == src) || n == 0)
		return (dest);
	if (psrc < pdest)
		while (n--)
				pdest[n] = psrc[n];
	else
		while (n--)
			*(pdest++) = *(psrc++);
	return (dest);
}
