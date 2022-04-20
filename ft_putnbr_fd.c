/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:14:45 by wborges-          #+#    #+#             */
/*   Updated: 2022/04/12 21:15:32 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;
	char	num[11];
	int		i;

	ln = n;
	i = 0;
	if (ln < 0)
		ln = ln * (-1);
	while (ln >= 10)
	{
		num[i] = (ln % 10) + '0';
		ln = ln / 10;
		i++;
	}
	num[i] = ln + '0';
	if (n < 0)
	{
		i++;
		num[i] = '-';
	}
	while (i >= 0)
	{
		write(fd, &num[i], 1);
		i--;
	}
}
