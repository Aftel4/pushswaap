/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:52:00 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/15 17:45:24 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nv;

	if (lst)
	{
		while (*lst)
		{
			nv = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = nv;
		}
	}
}
