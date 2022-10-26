/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atetsuo- <atetsuo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:03:23 by atetsuo-          #+#    #+#             */
/*   Updated: 2022/03/03 21:15:44 by atetsuo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long long	j;
	long long	isnegative;

	j = 0;
	isnegative = 1;
	while ((*str == '\t') || (*str == '\n') || (*str == '\v')
		|| (*str == '\f') || (*str == '\r') || (*str == ' '))
		str++;
	if ((*str == '+' ) || (*str == '-'))
	{
		if (*str == '-')
			isnegative = -1;
	str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		j = (j * 10) + (isnegative * (*str - '0'));
		if (j > 2147483647)
			return (-1);
		if (j < -2147483648)
			return (0);
		str++;
	}
	return (j);
}
