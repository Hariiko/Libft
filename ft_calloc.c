/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 20:09:10 by laltarri          #+#    #+#             */
/*   Updated: 2023/09/17 03:04:13 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	char	*arreglo;

	arreglo = malloc(num_elements * element_size);
	if (!arreglo)
		return (NULL);
	ft_bzero (arreglo, num_elements * element_size);
	return (arreglo);
}
