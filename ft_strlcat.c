/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryishii <ryishii@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 13:34:32 by ryishii           #+#    #+#             */
/*   Updated: 2020/11/27 01:26:14 by ryishii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	int		i;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (size + slen);
	i = 0;
	while (src[i] != '\0')
	{
		if (dlen + i + 1 == size)
			break ;
		dest[(int)dlen + i] = src[i];
		i++;
	}
	dest[(int)dlen + i] = '\0';
	return (dlen + slen);
}
