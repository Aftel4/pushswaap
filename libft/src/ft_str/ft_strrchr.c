/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:32:07 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/19 15:18:22 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char) c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (NULL);
}

// char	*ft_strrchr(const char *str, int c)
// {
// 	int	i;

// 	i = 0;
// 	while (*str != '\0')
// 	{
// 		str++;
// 		i++;
// 	}
// 	while (i != 0)
// 	{
// 		if (*str == c)
// 			return ((char *)str);
// 		str--;
// 		i--;
// 	}
// 	return (NULL);
// }
/*
#include <stdio.h>

int main() {
    const char *str = "Bonjour!";
    char *result = strrchr(str, 'o');

    if (result != NULL) {
        printf("Le caractère se trouve à l'adresse : %p\n", result);
    } else {
        printf("Caractère non trouvé.\n");
    }

    return 0;
}*/
