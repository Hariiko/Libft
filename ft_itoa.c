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

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static char	*calcularnum(char *a, int i, int n)
{
	int	digito;

	digito = 0;
	while (n > 0)
	{
		digito = n % 10;
		a[i--] = digito + '0';
		n = n / 10;
	}
	return (a);
}

static int	contnum(int copia)
{
	int	i;

	i = 0;
	while (copia > 0)
	{
		copia /= 10;
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
	a = calcularnum(a, i, n);
	return (a);
}

char	*ft_itoa(int n)
{
	int		copia;
	int		negative;

	copia = n;
	negative = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		copia = -n;
		negative = 1;
	}
	return (construct_string(copia, negative));
}
/*#include <stdio.h>
int main()
{
	char *s = ft_itoa(-2147483648);
	printf("%s\n", s);
	return 0;
	}
*/
