/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atetsuo- <atetsuo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:01:24 by atetsuo-          #+#    #+#             */
/*   Updated: 2022/02/24 15:04:39 by atetsuo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] != '\0' && haystack[i + j] == needle[j]
			&& (i + j) < len && needle[j] != '\0')
		{
			if (needle[j + 1] == '\0')
				return ((char *)&(haystack[i]));
			j++;
		}
		i++;
	}
	return (0);
}
