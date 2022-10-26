/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atetsuo- <atetsuo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:24:27 by atetsuo-          #+#    #+#             */
/*   Updated: 2022/03/06 13:17:27 by atetsuo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;

	if ((!s1) || (!s2))
		return (NULL);
	dst = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!dst)
		return (0);
	ft_memmove(dst, s1, ft_strlen(s1));
	ft_memmove(dst + ft_strlen(s1), s2, ft_strlen(s2));
	return (dst);
}
