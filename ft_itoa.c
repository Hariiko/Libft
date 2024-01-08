/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:59:39 by laltarri          #+#    #+#             */
/*   Updated: 2023/09/18 18:11:30 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*calculatenum(char *a, int i, int n)
{
	int	digital;

	digital = 0;
	while (n > 0)
	{
		digital = n % 10;
		a[i--] = digital + '0';
		n = n / 10;
	}
	return (a);
}

static int	contnum(int copy)
{
	int	i;

	i = 0;
	while (copy > 0)
	{
		copy /= 10;
		i++;
	}
	return (i);
}

static char	*construct_string(int n, int negative)
{
	char	*a;
	int		i;

	i = contnum(n);
	a = malloc((i + 1 + negative) * sizeof(char));
	if (a == NULL)
		return (NULL);
	if (negative == 1)
	{
		a[0] = '-';
		i++;
	}
	a[i--] = '\0';
	a = calculatenum(a, i, n);
	return (a);
}

char	*ft_itoa(int n)
{
	int		copy;
	int		negative;

	copy = n;
	negative = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		copy = -n;
		negative = 1;
	}
	return (construct_string(copy, negative));
}