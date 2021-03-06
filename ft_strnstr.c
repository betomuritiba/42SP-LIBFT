/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 20:15:32 by wborges-          #+#    #+#             */
/*   Updated: 2022/04/20 22:21:12 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t slen)
{
	size_t	flen;

	if (*find == '\0')
		return ((char *)str);
	flen = ft_strlen(find);
	while (*str && slen >= flen)
	{
		if (!(ft_strncmp(str, find, flen)))
			return ((char *)str);
		slen--;
		str++;
	}
	return (0);
}
