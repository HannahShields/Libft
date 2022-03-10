/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshields <hshields@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:48:19 by hshields          #+#    #+#             */
/*   Updated: 2022/03/07 11:59:41 by hshields         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static size_t	ft_size(char const *str, char c)
{
	size_t	i;
	size_t	words;
	size_t	letters;
	char	orig;

	i = 0;
	orig = -1;
	letters = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != c)
			letters++;
		if (str[i] != c && (orig == -1 || orig == c))
			words++;
		orig = str[i];
		i++;
	}
	if (words == 0 && letters > 0)
		words = 1;
	return (words);
}

static char	*ft_split_strdup(char const *src, char c, size_t *i)
{
	char	*dest;
	size_t	n;
	size_t	j;

	n = 0;
	while (src[*(i) + n] && src[*(i) + n] != c)
		n++;
	dest = (char *)malloc(sizeof(char) * (n + 1));
	if (dest == 0)
		return (0);
	dest[n] = '\0';
	j = 0;
	while (j < n)
	{
		dest[j] = src[*(i)];
		j++;
		*(i) = *(i) + 1;
	}
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**news;
	size_t	deep;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (!s)
		return (0);
	deep = ft_size(s, c);
	news = (char **)malloc(sizeof(char *) * (deep + 1));
	if (news == 0)
		return (0);
	while (k < deep)
	{	
		while (s[i] == c)
			i++;
		news[k] = ft_split_strdup(s, c, &i);
		if (news[k] == 0)
			return (0);
		k++;
	}
	news[k] = 0;
	return (news);
}
