/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:59:08 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/13 16:15:43 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cpy;
	int		taille1;
	int		taille2;
	int		i;

	if (s1 && s2)
	{
		taille1 = ft_strlen(s1);
		taille2 = ft_strlen(s2);
		cpy = (char *)malloc (sizeof(char) * (taille1 + taille2 + 1));
		if (!cpy)
			return (NULL);
		i = -1;
		while (s1[++i])
			cpy[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			cpy[taille1] = s2[i];
			taille1++;
		}
		cpy[taille1] = '\0';
		return (cpy);
	}
	return (NULL);
}

// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }
// int main()
// {
//     char *s1 = "Hello, ";
//     char *s2 = "world!";
//     char *result;

//     result = ft_strjoin(s1, s2);

//     if (result)
//     {
//         printf("Result of ft_strjoin: %s\n", result);
//         free(result);  // N'oubliez pas de libérer la mémoire allouée
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }