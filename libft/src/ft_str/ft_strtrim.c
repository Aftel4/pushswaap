/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:35:40 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/13 16:16:41 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int
	in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	debut;
	size_t	fin;

	debut = 0;
	while (s1[debut] && in_set(s1[debut], set))
		debut++;
	fin = ft_strlen(s1);
	while (fin > debut && in_set(s1[fin - 1], set))
		fin--;
	str = (char *)malloc(sizeof(*s1) * (fin - debut + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (debut < fin)
		str[i++] = s1[debut++];
	str[i] = 0;
	return (str);
}
