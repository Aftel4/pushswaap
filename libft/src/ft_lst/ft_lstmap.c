/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:38:25 by nogerace          #+#    #+#             */
/*   Updated: 2024/12/09 13:48:33 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*cpy;

	if (!lst | !del | !f)
		return (NULL);
	lst2 = NULL;
	while (lst != NULL)
	{
		if (f)
			cpy = ft_lstnew(f(lst->content));
		else
			cpy = ft_lstnew(lst->content);
		if (!cpy)
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		ft_lstadd_back(&lst2, cpy);
		lst = lst->next;
	}
	return (lst2);
}
