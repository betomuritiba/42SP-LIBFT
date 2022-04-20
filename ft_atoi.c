/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:13:57 by wborges-          #+#    #+#             */
/*   Updated: 2022/04/07 22:03:39 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char l);
int	ft_convert(const char *str, int i);

int	ft_atoi(const char *str)
{
	int	ret;
	int	i;
	int	sign;

	ret = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]) || ((str[i] == '+')
			&& (str[i + 1] >= '0' && str[i + 1] <= '9')))
		i++;
	if ((str[i] == '-') && (str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
		i++;
		sign = -1;
	}
	else if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	ret = ft_convert(str, i);
	return (ret * sign);
}

int	ft_convert(const char *str, int i)
{
	int	ret;

	ret = 0;
	while ((str[i] >= '0' && str[i] <= '9')
		&& (str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
		ret = ret + (str[i] - 48);
		ret = ret * 10;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
		ret = ret + (str[i] - 48);
	return (ret);
}

int	ft_isspace(char l)
{
	if ((l == 32) || (l >= 9 && l <= 13))
		return (1);
	return (0);
}
