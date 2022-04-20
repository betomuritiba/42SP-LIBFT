/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:27:55 by wborges-          #+#    #+#             */
/*   Updated: 2022/04/12 03:14:59 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_num(long num);

char	*ft_itoa(int n)
{
	char	*num;
	int		len;
	long	ln;

	ln = n;
	len = ft_len_num(ln);
	num = (char *)malloc (sizeof(char) * len + 1);
	if (!num)
		return (NULL);
	num[len] = '\0';
	if (n < 0)
	{
		num[0] = '-';
		ln = ln * (-1);
	}
	while (ln >= 10)
	{	
		num[len - 1] = (ln % 10) + 48;
		ln = ln / 10;
		len--;
	}
	num[len - 1] = ln + 48;
	return (num);
}

static int	ft_len_num(long num)
{
	int	count;

	count = 1;
	if (num < 0)
	{
		count++;
		num = num * (-1);
	}
	while (num >= 10)
	{
		num = num / 10;
		count++;
	}
	return (count);
}
