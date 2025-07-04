/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:34:40 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/19 15:39:07 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	size_dst;
	size_t	size_src;

	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	i = 0;
	if (size <= size_dst)
		return (size + size_src);
	while (src[i] && size_dst + i < size - 1)
	{
		dst[size_dst + i] = src[i];
		i++;
	}
	dst[size_dst + i] = '\0';
	return (size_src + size_dst);
}
// int main()
// {
//     // Exemple d'utilisation de strlcat
//     char dest[20] = "Bonjour ";
//     const char *src = "tout le monde";

//     // Afficher la chaîne avant l'appel à strlcat
//     printf("Avant strlcat : '%s'\n", dest);

//     // Concaténer src à dest avec une taille maximale de 20
//     size_t result = strlcat(dest, src, sizeof(dest));

//     // Afficher la chaîne après l'appel à strlcat
//     printf("Après strlcat : '%s'\n", dest);
//     printf("Longueur totale possible : %zu\n", result);

//     return 0;
// }
