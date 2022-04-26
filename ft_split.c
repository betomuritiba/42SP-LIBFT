/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:21:00 by wborges-          #+#    #+#             */
/*   Updated: 2022/04/21 16:24:51 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nword(const char *str, char c);
size_t	ft_wordlen(const char *str, char c);

char	**ft_split(const char *s, char c)
{
	int		n_word;
	int		i;
	char	**words;
	size_t	size;

	n_word = ft_nword(s, c);
	words = (char **)malloc(sizeof(char *) * (n_word + 1));
	if (!words)
		return (NULL);
	i = 0;
	while (i < n_word)
	{
		while (*s == c)
			s++;
		size = ft_wordlen(s, c);
		words[i] = malloc(sizeof(char) * (size + 1));
		if (!words[i])
			return (NULL);
		ft_strlcpy(words[i], s, size + 1);
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

int	ft_nword(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			while (*str != c && *str)
				str++;
			i++;
		}
	}
	return (i);
}
