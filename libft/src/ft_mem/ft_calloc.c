/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:11:10 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/19 16:35:14 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb_ele, size_t size_ele)
{
	size_t	ini;
	void	*ptr;

	ini = nb_ele * size_ele;
	if (size_ele && ((ini / size_ele) != nb_ele))
		return (NULL);
	ptr = malloc(ini);
	if (NULL == ptr)
		return (NULL);
	ft_bzero(ptr, ini);
	return (ptr);
}
