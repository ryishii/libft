/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryishii <ryishii@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 22:00:47 by ryishii           #+#    #+#             */
/*   Updated: 2020/11/27 00:28:14 by ryishii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	int i;

	i = 0;
	while (" \t\n\v\f\r"[i] != '\0')
	{
		if (" \t\n\v\f\r"[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_ispm(char c)
{
	if (c == '-')
		return (-1);
	else if (c == '+')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	long	a;
	int		sign;
	int		i;

	i = 0;
	a = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = ft_ispm(str[i]);
	if (sign != 0)
		i++;
	while ('0' <= str[i] && str[i] <= '9')
		a = a * 10 + str[i++] - '0';
	if (sign == 1 && a > LONG_MAX)
		return (-1);
	if (sign == -1 && a - 1 > LONG_MAX)
		return (0);
	if (sign == 0)
		return ((int)a);
	return ((int)a * sign);
}
