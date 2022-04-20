/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:02:21 by wborges-          #+#    #+#             */
/*   Updated: 2022/04/07 22:04:41 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const char	*tmp1;
	const char	*tmp2;
	size_t		i;

	i = 0;
	tmp1 = (const char *)str1;
	tmp2 = (const char *) str2;
	while (i < n)
	{
		if (tmp1[i] > tmp2[i])
			return (1);
		else if (tmp1[i] < tmp2[i])
			return (-1);
		i++;
	}
	return (0);
}
