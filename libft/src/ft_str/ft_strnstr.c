/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:25:28 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/19 14:16:47 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (needle[0] == haystack[i])
		{
			j = 0;
			while (haystack[i + j] == needle[j] && needle[j] && (i + j) < len)
			{
				j++;
			}
			if (needle[j] == '\0')
				return ((char *) haystack + i);
		}
		i++;
	}
	return (NULL);
}
// int main() {
//     const char *haystack = "Hello, world!";
//     const char *needle = "world";
//     char *result = strnstr(haystack, needle, 14);

//     if (result != NULL) {
//         printf("Sous-chaîne trouvée : %s\n", result);
//     } else {
//         printf("Sous-chaîne non trouvée.\n");
//     }

//     return 0;
// }
