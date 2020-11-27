/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryishii <ryishii@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:14:11 by ryishii           #+#    #+#             */
/*   Updated: 2020/11/27 02:20:04 by ryishii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*s;

	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(s = malloc(sizeof(char) * i)))
		return (NULL);
	ft_strlcpy(s, (char*)s1, i);
	ft_strlcat(s, (char*)s2, i);
	return (s);
}
