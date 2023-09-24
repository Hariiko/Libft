/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:26:57 by laltarri          #+#    #+#             */
/*   Updated: 2023/09/23 20:17:50 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*devolvertemp(int i, int j, char const *s1, char const *s2)
{
	char	*temp;
	int		e;
	int		k;

	e = 0;
	k = 0;
	temp = (char *)malloc(i + j + 1);
	if (temp == NULL)
		return (NULL);
	while (e < i)
	{
		temp[e] = s1[e];
		e++;
	}
	while (k < j)
	{
		temp[e] = s2[k];
		e++;
		k++;
	}
	temp[e] = '\0';
	return (temp);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen((char *)s1);
	j = ft_strlen((char *)s2);
	temp = devolvertemp(i, j, s1, s2);
	return (temp);
}
