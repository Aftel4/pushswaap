/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:13:38 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/20 14:17:07 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *) ptr1;
	p2 = (const unsigned char *) ptr2;
	i = 0;
	while (i < num)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main() {
    const char data1[] = { 1, 2, 1, 4, 6 };
    const char data2[] = { 1, 2, 3, 4, 6 };

    // Comparer les deux blocs de mémoire
    int result = memcmp(data1, data2, sizeof(data1));

    if (result == 0) {
        printf("Les blocs de mémoire sont identiques.\n");
    } else if (result < 0) {
        printf("Le premier bloc est inférieur au second.\n");
    } else {
        printf("Le premier bloc est supérieur au second.\n");
    }

    return 0;
}*/
