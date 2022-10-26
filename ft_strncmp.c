/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atetsuo- <atetsuo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:36:05 by atetsuo-          #+#    #+#             */
/*   Updated: 2022/03/10 20:57:26 by atetsuo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i]
		&& (unsigned char)s1[i] && (unsigned char)s2[i] && i < n - 1)
	i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
