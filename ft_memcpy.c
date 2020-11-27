/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryishii <ryishii@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 23:15:04 by ryishii           #+#    #+#             */
/*   Updated: 2020/11/27 00:41:38 by ryishii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				i;

	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	i = 0;
	if (dst == src)
		return (dst);
	while (i < (int)n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dst);
}
