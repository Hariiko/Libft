/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:55:51 by laltarri          #+#    #+#             */
/*   Updated: 2023/09/23 14:25:44 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	contcharacter(char const *s, char c)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	if (!s)
		return (0);
	if (s[i] && s[0] != c)
		cont++;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && i != 0 && s[i] != c)
			cont++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (cont);
}

static int	contlength(char const *s, char c, int i)
{
	int	legth;

	legth = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		legth++;
	}
	return (legth);
}

static char	**freemalloc(char **dst, int i)
{
	while (i > 0)
	{
		i--;
		free(dst[i]);
	}
	free(dst);
	return (NULL);
}

static char	**addmalloc(char const *s, char **dst, char c, int contmalloc)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] && j < contmalloc)
	{
		k = 0;
		while (s[i] == c)
			i++;
		dst[j] = malloc(sizeof(char) * (contlength(s, c, i) + 1));
		if (dst[j] == NULL)
			return (freemalloc(dst, j));
		while (s[i] && s[i] != c)
			dst[j][k++] = s[i++];
		dst[j][k] = '\0';
		j++;
	}
	dst[j] = NULL;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		contmalloc;

	if (!s)
		return (NULL);
	contmalloc = contcharacter(s, c);
	dst = malloc(sizeof(char *) * (contmalloc + 1));
	if (dst == NULL)
		return (NULL);
	return (addmalloc (s, dst, c, contmalloc));
}
