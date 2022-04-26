/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:43:11 by wborges-          #+#    #+#             */
/*   Updated: 2022/04/25 18:57:29 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*newlst;

	if (!lst)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&elem, (*del));
			return (NULL);
		}
		else
			ft_lstadd_back(&newlst, elem);
		lst = lst->next;
	}
	return (newlst);
}
