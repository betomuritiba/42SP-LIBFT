/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:21:00 by wborges-          #+#    #+#             */
/*   Updated: 2022/04/11 22:25:25 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nsplit(const char *str, char c);
size_t	ft_wordlen(const char *str, char c);

char	**ft_split(const char *s, char c)
{
	int		n_split;
	int		i;
	char	**words;
	size_t	size;

	n_split = ft_nsplit(s, c);
	words = (char **)malloc(sizeof(char *) * (n_split + 2));
	if (!words)
		return (NULL);
	i = 0;
	while (i <= n_split)
	{
		size = ft_wordlen(s, c) + 1;
		words[i] = malloc(sizeof(char) * size);
		if (!words[i])
			return (NULL);
		ft_strlcpy(words[i], s, size);
		s = s + size;
		i++;
	}
	words[i] = NULL;
	return (words);
}

size_t	ft_wordlen(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

int	ft_nsplit(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == c)
			i++;
		str++;
	}
	return (i);
}
