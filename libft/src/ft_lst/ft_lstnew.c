/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:45:56 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/20 13:51:48 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nv_ele;

	nv_ele = (t_list *)malloc(sizeof(t_list));
	if (!nv_ele)
		return (NULL);
	nv_ele->content = content;
	nv_ele->next = NULL;
	return (nv_ele);
}
