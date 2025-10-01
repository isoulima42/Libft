/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isoulima <soulimani.ilir@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 03:05:01 by isoulima          #+#    #+#             */
/*   Updated: 2025/10/01 13:00:01 by isoulima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	tmp[n];

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		tmp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = tmp[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	char	src[50] = "1234";
	char	*dest = &src[4];

	strcpy(dest, "Allo Bassem");
	ft_memmove(dest, src, 12);
	printf("src: %s\n", src); // Affiche le contenu de src
    printf("dest: %s\n", dest); // Affiche le contenu de dest

    return 0;
}*/