/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:52:29 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/20 14:24:45 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*rnew(size_t size)
{
	char	*str;

	(str = (char *)malloc(sizeof(char) * size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	return (str);
}

static void	fill_number(char *cpy, long n, int siz, int i)
{
	while (siz-- > i)
	{
		cpy[siz] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int num)
{
	char		*cpy;
	int			siz;
	int			i;
	long int	n;

	n = num;
	siz = size(n);
	cpy = rnew(siz);
	if (!cpy)
		return (NULL);
	if (n == 0)
		return (cpy[0] = '0', cpy[1] = '\0', cpy);
	i = 0;
	if (n < 0)
	{
		n = -n;
		cpy[0] = '-';
		i++;
	}
	fill_number(cpy, n, siz, i);
	return (cpy);
}
