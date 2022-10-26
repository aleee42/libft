/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atetsuo- <atetsuo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:12:42 by atetsuo-          #+#    #+#             */
/*   Updated: 2022/03/06 17:19:01 by atetsuo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, *(s1 + i)) && s1[i])
			i++;
	while (ft_strrchr(set, *(s1 + j - 1)) && j > i)
			j--;
	new = ft_substr(s1, i, j - i);
	return (new);
}
