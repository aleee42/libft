/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atetsuo- <atetsuo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:13:41 by atetsuo-          #+#    #+#             */
/*   Updated: 2022/03/10 21:07:36 by atetsuo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	x;

	x = ft_strlen(str);
	while (x >= 0)
	{
		if (str[x] == (char)c)
			return ((char *)str + x);
			x--;
	}
	return (NULL);
}
