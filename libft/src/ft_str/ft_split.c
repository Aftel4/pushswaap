/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:49:20 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/20 14:20:44 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	inside;

	i = 0;
	inside = 0;
	while (*str)
	{
		if (*str != c && inside == 0)
		{
			inside = 1;
			i++;
		}
		else if (*str == c)
			inside = 0;
		str++;
	}
	return (i);
}

static char	*dupli(const char *str, int debut, int fin)
{
	char	*mots;
	int		i;

	i = 0;
	mots = malloc((fin - debut + 1) * sizeof(char));
	while (debut < fin)
		mots[i++] = str[debut++];
	mots[i] = '\0';
	return (mots);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		x;
	char	**cpy;

	cpy = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !(cpy))
		return (0);
	i = 0;
	j = 0;
	x = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && x < 0)
			x = i;
		else if ((s[i] == c || i == ft_strlen(s)) && x >= 0)
		{
			cpy[j++] = dupli(s, x, i);
			x = -1;
		}
		i++;
	}
	cpy[j] = 0;
	return (cpy);
}
