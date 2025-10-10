/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isoulima <soulimani.ilir@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:53:36 by isoulima          #+#    #+#             */
/*   Updated: 2025/10/09 15:25:32 by isoulima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	str = malloc(j - i + 1);
	if (!str)
		return(0);
	ft_strlcpy(str, s1 + i, j - i + 1);
	return (str);
}
#include<stdio.h>
int main (void)
{
	char	*set = "abc";
	char	*s1 = "aaababababaccccJ'aime pas les arbresbcaacacacabc";

	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}