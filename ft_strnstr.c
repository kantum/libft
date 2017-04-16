/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 16:53:44 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/16 16:53:46 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (big[i] && i < len - 1)
	{
		while (big[i] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i - j]);
			else
			{
				i++;
				j++;
			}
		}
		j = 0;
		i++;
	}
	return (NULL);
}
