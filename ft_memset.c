/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:22:55 by laltarri          #+#    #+#             */
/*   Updated: 2023/09/17 02:08:34 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	e;
	size_t			i;

	ptr = (unsigned char *)b;
	e = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		ptr[i] = e;
		i++;
	}
	return (ptr);
}
