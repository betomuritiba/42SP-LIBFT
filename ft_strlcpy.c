/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:55:32 by wborges-          #+#    #+#             */
/*   Updated: 2022/04/14 16:30:02 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	if (!dst)
		return (0);
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (*src && size-- > 1)
		*dst++ = (char)*src++;
	*dst = '\0';
	return (len);
}
