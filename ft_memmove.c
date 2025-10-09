/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isoulima <soulimani.ilir@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 03:05:01 by isoulima          #+#    #+#             */
/*   Updated: 2025/10/09 02:12:32 by isoulima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	if (!dest && !src)
		return (NULL);
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main (void)
// {
// 	char	src[50] = "1234";
// 	char	*dest = &src[4];

// 	strcpy(dest, "Allo Bassem");
// 	ft_memmove(dest, src, 12);
// 	printf("src: %s\n", src);
//  printf("dest: %s\n", dest);

//     return 0;
// }