/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryishii <ryishii@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 20:46:16 by ryishii           #+#    #+#             */
/*   Updated: 2020/11/26 05:13:22 by ryishii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*a;

	a = (void*)malloc(count * size);
	if (a == NULL)
		return (NULL);
	ft_bzero(a, count * size);
	return (a);
}
