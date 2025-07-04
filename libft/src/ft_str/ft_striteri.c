/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:51:55 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/13 16:12:30 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// void to_uppercase(unsigned int i, char *c)
// {
//     (void)i;  
//     *c = (char)toupper((unsigned char)*c);
// }

// int main()
// {
//     char str[] = "hello world";

//     ft_striteri(str, to_uppercase);

//     // Afficher la chaîne modifiée
//     printf("Modified string: %s\n", str);

//     return 0;
// }