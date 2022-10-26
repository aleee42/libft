/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atetsuo- <atetsuo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:29:19 by atetsuo-          #+#    #+#             */
/*   Updated: 2022/03/06 17:16:33 by atetsuo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = -1;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		dst = malloc(sizeof(char));
		if (!dst)
			return (NULL);
		*dst = '\0';
		return (dst);
	}
	if (ft_strlen(s) < len)
		return (ft_strdup(s + start));
		dst = malloc(len + 1);
	if (!dst)
		return (NULL);
	while (++i < len && start < ft_strlen(s))
		dst[i] = s[start + i];
	dst[i] = '\0';
	return (dst);
}

/*
#include <stdio.h>

int	main(void)
{
	size_t	len;
	char const	s[30] = "teste da marmelada";
	unsigned int	start;

	start = 5;
	len = 10;
	printf("substr: %s .", ft_substr(s, start, len));
}
*/