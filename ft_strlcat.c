/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:47:02 by wborges-          #+#    #+#             */
/*   Updated: 2022/04/14 20:21:26 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	size_s;
// 	size_t	size_d;

// 	i = 0;
// 	size_s = ft_strlen(src);
// 	size_d = ft_strlen(dst);
// 	if (size < size_d)
// 		return (size + size_s);
// 	while ((size_d + i < size -1) && (src[i] != '\0'))
// 	{
// 		dst[size_d + i] = src[i];
// 		i++;
// 	}
// 	dst[size_d + i] = '\0';
// 	return (size_s + size_d);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen(src);
	dstlen = 0;
	while (dst[dstlen] && dstlen < size)
		dstlen++;
	i = 0;
	if (dstlen < size)
	{
		while ((i + dstlen) < (size - 1) && src[i])
		{
			dst[i + dstlen] = src[i];
			i++;
		}
		dst[i + dstlen] = '\0';
	}
	return (dstlen + srclen);
}
