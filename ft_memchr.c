/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isoulima <soulimani.ilir@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 23:51:26 by isoulima          #+#    #+#             */
/*   Updated: 2025/10/09 02:11:55 by isoulima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmps;

	tmps = (unsigned char *)s;
	while (n--)
	{
		if (*tmps == (unsigned char)c)
			return ((void *)tmps);
		tmps++;
	}
	return (0);
}

// #include <stdio.h>
// int main ()
// {
// 	const char *str = "Bachar el assad";
// 	printf("%s\n", (char *)ft_memchr(str, 'i', 5));
// 	return (0);
// }