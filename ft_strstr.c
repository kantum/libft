/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 16:53:55 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/16 16:53:56 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (big[i])
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
