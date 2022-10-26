/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atetsuo- <atetsuo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:14:48 by atetsuo-          #+#    #+#             */
/*   Updated: 2022/03/06 12:18:52 by atetsuo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d = d + (len - 1);
		s = s + (len - 1);
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}
