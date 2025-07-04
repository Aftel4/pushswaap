/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:40:08 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/19 14:16:40 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main() {
    const char *str1 = "Bonjour";
    const char *str2 = "XXXX";

    int result = strncmp(str1, str2, 6);  // Comparer les 6 premiers caractères

    if (result == 0) {
        printf("Les chaînes sont identiques jusqu'aux 6 premiers caractères.\n");
    } else if (result < 0) {
        printf("La chaîne '%s' est inférieure à '%s'.\n", str1, str2);
    } else {
        printf("La chaîne '%s' est supérieure à '%s'.\n", str1, str2);
    }

    return 0;
}*/
