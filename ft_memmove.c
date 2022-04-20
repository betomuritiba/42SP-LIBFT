/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:42:37 by wborges-          #+#    #+#             */
/*   Updated: 2022/04/13 21:45:39 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t n)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;

	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	if (tmpdst == NULL && tmpsrc == NULL)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	else
	{
		while (n > 0)
		{
			tmpdst [n] = tmpsrc[n];
			n--;
		}
		return (dst);
	}
}
