/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:52:46 by laltarri          #+#    #+#             */
/*   Updated: 2023/09/18 18:28:45 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include <string.h>
#include <stdlib.h>

static char	*search(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[j + i] \
					&& needle[j] && j + i < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*result;

	result = search(haystack, needle, len);
	return ((char *)result);
}
/*
int main()
{
	ft_strnstr("hellow da", (void *)0, 10);

	return (0);
}*/
