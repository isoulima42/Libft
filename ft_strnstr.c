/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isoulima <soulimani.ilir@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:28:28 by isoulima          #+#    #+#             */
/*   Updated: 2025/10/08 18:41:17 by isoulima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (!*s2)
		return ((char *)s1);
	while (j < n && *s1)
	{
		i = 0;
		while (i + j < n && s1[i] && s1[i] == s2[i])
			i++;
		if (!s2[i])
			return ((char *)s1);
		s1++;
		j++;
	}
	return (0);
}

// #include <stdio.h>

// int	main (void)
// {
// 	const char	*big = "Allo Bassem";
// 	const char	*little = "ss";

// 	printf("%s\n", ft_strnstr(big, little, 9));
// 	return (0);
// }