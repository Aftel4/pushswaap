/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:56:04 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/19 14:41:55 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

static void	cpy_f(unsigned char *dest, const unsigned char *src, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		dest[i] = src[i];
		i++;
	}
}

static void	cpy_b(unsigned char *dest, const unsigned char *src, size_t num)
{
	while (num > 0)
	{
		num--;
		dest[num] = src[num];
	}
}

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	unsigned char		*dest;
	const unsigned char	*src;

	if (!destination && !source)
		return (NULL);
	dest = (unsigned char *)destination;
	src = (const unsigned char *)source;
	if (dest < src)
		cpy_f(dest, src, num);
	else
		cpy_b(dest, src, num);
	return (destination);
}
