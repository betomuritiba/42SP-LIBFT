/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:04:13 by wborges-          #+#    #+#             */
/*   Updated: 2022/04/07 22:04:34 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t count)
{
	unsigned char	*tmp;

	tmp = ((unsigned char *)ptr);
	while (count > 0)
	{
		if (*tmp == (unsigned char)c)
			return (tmp);
		else
			tmp++;
		count--;
	}
	return (0);
}
