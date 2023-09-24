/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:11:22 by laltarri          #+#    #+#             */
/*   Updated: 2023/09/17 02:37:15 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	l;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	l = ft_strlen(src);
	return (l);
}
/*
#include <string.h>
#include <stdio.h>
int main( void ) {
//	printf("el original -> %lu\n", strlcpy((void *)0, "hola", 1));
	printf("el mio -> %zu\n", ft_strlcpy((void *)0, "hola", 1));
//	printf("el original -> %lu\n", strlcpy("hola", (void *)0, 1));
//	printf("el mio -> %zu\n", ft_strlcpy("hola", (void *)0, 1));
}*/
