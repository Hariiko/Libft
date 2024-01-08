/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:27:48 by laltarri          #+#    #+#             */
/*   Updated: 2023/09/22 22:08:58 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*temp;
	int				slen;

	i = 0;
	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	slen = ft_strlen(s);
	if (len > slen - start)
		len = slen - start;
	temp = (char *)malloc(sizeof(char) * (len +1));
	if (temp == NULL)
		return (NULL);
	while (len--)
	{
		temp[i] = s[start];
		i++;
		start++;
	}
	temp[i] = '\0';
	return ((char *)temp);
}
