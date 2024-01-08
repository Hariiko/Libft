/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:33:21 by laltarri          #+#    #+#             */
/*   Updated: 2023/09/24 20:44:17 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	t;
	char	*array;
	int		r;
	int		i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	array = (char *)malloc((i + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	r = 0;
	while (r < i)
	{
		t = f(r, s[r]);
		array[r] = t;
		r++;
	}
	array[r] = '\0';
	return (array);
}
