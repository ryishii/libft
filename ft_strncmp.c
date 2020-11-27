/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryishii <ryishii@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 00:26:18 by ryishii           #+#    #+#             */
/*   Updated: 2020/11/26 04:16:47 by ryishii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char*)s1;
	b = (unsigned char*)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < (int)n && a[i] == b[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		i++;
	}
	if (i == (int)n)
		return (0);
	return (a[i] - b[i]);
}
