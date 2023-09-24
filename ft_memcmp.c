/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 20:05:48 by laltarri          #+#    #+#             */
/*   Updated: 2023/09/17 04:12:11 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;
	size_t			j;

	p1 = (unsigned char *) ptr1;
	p2 = (unsigned char *) ptr2;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (p1[i] == p2[i])
		{
			j = (0);
		}
		else
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (j);
}
