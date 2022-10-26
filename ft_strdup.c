/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atetsuo- <atetsuo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:21:44 by atetsuo-          #+#    #+#             */
/*   Updated: 2022/03/06 12:24:24 by atetsuo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;

	dst = malloc((ft_strlen(s1) + 1) * sizeof (char));
	if (!dst)
		return (NULL);
	dst = ft_memmove(dst, s1, ft_strlen(s1) + 1);
	return (dst);
}
