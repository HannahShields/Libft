/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshields <hshields@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:39:50 by hshields          #+#    #+#             */
/*   Updated: 2022/02/24 14:52:05 by hshields         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*rtn;

	rtn = malloc(size * n);
	if (rtn == NULL)
		return (NULL);
	ft_bzero(rtn, size * n);
	return (rtn);
}
