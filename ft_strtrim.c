/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:48:36 by laltarri          #+#    #+#             */
/*   Updated: 2023/09/18 16:00:58 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	com(char c, const char *set)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (set[i])
	{
		if (set[i] == c)
			res = 1;
		i++;
	}
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*array;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen((char *)s1);
	while (s1[i] && com(s1[i], set))
		i++;
	while (len > i && com (s1[len - 1], set))
		len--;
	array = (char *)malloc(len - i + 1);
	if (!array)
		return (NULL);
	while (i < len)
	{
		array[j] = s1[i];
		i++;
		j++;
	}
	array[j] = '\0';
	return (array);
}
