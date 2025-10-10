/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isoulima <soulimani.ilir@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:08:31 by isoulima          #+#    #+#             */
/*   Updated: 2025/10/10 02:28:41 by isoulima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void copy(char *dst, char *src, char c)
{
	size_t	i;

	i = 0;
	while (src[i] && src[i] != c)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
}

static size_t	wordcount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return(count);
}

static size_t	lenword(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return(i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**w;

	i = 0;
	j = 0;
	w = malloc(wordcount(s, c) + 1);
	if (!w)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			w[j] = malloc(lenword(s + i, c) + 1);
			if (!w[j])
				return(0);
			copy(&w[j++][0],(char *) s+i, c);
		}
		i++;
	}
	w[j+1] = malloc (1);
	w[j+1][0] = 0;
	return(w);
}
#include<stdio.h>
int main (void)
{
	char	*str = "J'aime pas les arbres";
	char	**tab;
	size_t	i = 0;

	tab = ft_split(str, ' ');
	while (tab[i])
		printf("%s\n", tab[i++]);
	return (0);
}

