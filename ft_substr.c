/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:33:10 by wborges-          #+#    #+#             */
/*   Updated: 2022/04/21 17:10:50 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	len_sub;

	len_sub = ft_strlen(s) - start;
	if (!s)
		return (NULL);
	if (len_sub < len)
		len = len_sub;
	if (ft_strlen(s) > start)
	{
		temp = (char *)ft_calloc(len + 1, sizeof(char));
		if (!temp)
			return (NULL);
		ft_strlcpy(temp, &s[start], len + 1);
	}
	else
		temp = (char *) ft_calloc(1, sizeof(char));
	return (temp);
}
