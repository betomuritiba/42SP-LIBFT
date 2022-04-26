/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:42:37 by wborges-          #+#    #+#             */
/*   Updated: 2022/04/21 17:12:30 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*tmpdst;
	const char	*tmpsrc;

	tmpdst = (char *)dst;
	tmpsrc = (const char *)src;
	if (tmpdst == NULL && tmpsrc == NULL)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	else
	{
		while (n > 0)
		{
			n--;
			tmpdst [n] = tmpsrc[n];
		}
		return (dst);
	}
}
