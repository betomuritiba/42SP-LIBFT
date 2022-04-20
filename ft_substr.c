/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:33:10 by wborges-          #+#    #+#             */
/*   Updated: 2022/04/08 22:32:34 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	int		i;

	temp = (char *)malloc(sizeof(char) * len);
	if (!temp || !s)
		return (NULL);
	i = 0;
	while (*s && len > 0)
	{
		temp[i] = s[start + i];
		i++;
		len--;
	}
	temp[i] = '\0';
	return (temp);
}
