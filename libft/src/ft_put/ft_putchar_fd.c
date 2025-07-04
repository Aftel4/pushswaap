/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogerace <nogerace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:45:40 by nogerace          #+#    #+#             */
/*   Updated: 2024/11/20 12:43:17 by nogerace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
}
// #include <stdio.h>
// int main() {
//     ft_putchar_fd('A', 1);  
//     ft_putchar_fd('B', 2);  
//     ft_putchar_fd('C', 0); 

//     return 0;
// }
