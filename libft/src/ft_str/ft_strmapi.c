/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:50:03 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/19 13:16:20 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	if (!s)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!res)
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

// char my_func(unsigned int i, char str)
// {
//     // Affichage de l'index et du caractère, puis transformation en majuscule
//     printf("My inner function: index = %u and %c\n", i, str);
//     return (str - 32);  // Convertir les lettres minuscules en majuscules
// }

// int main()
// {
//     char str[10] = "hello.";  // Déclaration de la chaîne

//     // Afficher la chaîne avant transformation
//     printf("Original string: %s\n", str);

//     // Appliquer ft_strmapi à la chaîne str avec la fonction my_func
//     char *result = ft_strmapi(str, my_func);

//     // Afficher la chaîne résultante
//     if (result)
//     {
//         printf("Transformed string: %s\n", result);
//         free(result);
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }
// }
