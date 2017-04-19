/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 20:53:09 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/19 17:18:34 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	x;
	size_t	z;
	int		words;
	char	**tab;

	i = 0;
	z = 0;
	x = -1;
	tab = NULL;
	if (!(tab = (char **)malloc(sizeof(char *) * (words + 1))))
		return (0);
	tab[words + 1] = NULL;
	while (s[i])
	{
		while (s[z] != c)
			z++;
		if (!(tab[i] = (char *)malloc(sizeof(char) * (z + 1))))
			return (0);
		while (x++ < z)
			tab[i][x] = s[x];
		tab[i][x] = '\0';
		x = 0;
		while (s[z] == c)
			z++;
		i++;
	}
	return (tab);
}
