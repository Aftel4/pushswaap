/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:17:16 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/20 14:18:53 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < size -1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int main() {
    char dest[10];
    const char *src = "Hello, world!";
    size_t len = strlcpy(dest, src, sizeof(dest));

    printf("Chaîne copiée : %s\n", dest);  // Affiche "Hello, wo"
    printf("Longueur totale de la source : %zu\n", len);  // Affiche 13

    return 0;
}*/
