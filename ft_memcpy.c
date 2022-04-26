/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:51:15 by wborges-          #+#    #+#             */
/*   Updated: 2022/04/21 17:10:14 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*tmpdst;
	const char	*tmpsrc;

	i = 0;
	tmpdst = (char *)dst;
	tmpsrc = (const char *)src;
	if (!tmpdst && !tmpsrc)
		return (NULL);
	while (i < n)
	{
		tmpdst [i] = tmpsrc[i];
		i++;
	}
	return (dst);
}
