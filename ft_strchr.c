/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atetsuo- <atetsuo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:11:07 by atetsuo-          #+#    #+#             */
/*   Updated: 2022/02/22 12:22:58 by atetsuo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == (char)c)
			break ;
		x++;
	}
	if (str[x] != '\0' || c == '\0')
		return ((char *)str + x);
	return (NULL);
}
