/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aleatoire.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isoulima <soulimani.ilir@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 00:49:12 by isoulima          #+#    #+#             */
/*   Updated: 2025/10/09 02:13:56 by isoulima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		aleatoire(char *ptr)
{
	if ((size_t)ptr%10 == 0)
		return(1);
	if ((size_t)ptr%10 == 2)
		return(2);
	if ((size_t)ptr%10 == 4)
		return(3);
	if ((size_t)ptr%10 == 6)
		return(4);
	if ((size_t)ptr%10 == 8)
		return(5);
	return(0);
}


int main (void)
{
	int		res;
	char	*ptr = "Bachar";

	res = aleatoire(ptr);
	if (res == 1 || res == 2)
		printf("Anis prend le redbull tropical\n");
	if (res == 3 || res == 4)
		printf("Anis prend le redbull gingembre\n");
	if (res == 5)
		printf("Anis va crever de soif\n");
	return (0);
}