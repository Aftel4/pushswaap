/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:42:13 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/19 14:14:54 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	size_t	i;

	i = 0;
	while (num != 0)
	{
		((unsigned char *) destination)[i] = ((unsigned char *) source)[i];
		i++;
		num--;
	}
	return (destination);
}
