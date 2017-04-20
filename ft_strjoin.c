/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 20:42:17 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/20 22:55:41 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len_s1;
	size_t	len_s2;
	char	*ret;

	i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!(ret = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1))))
		return (0);
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		ret[len_s1 + i] = s2[i];
		i++;
	}
	ret[len_s1 + len_s2] = '\0';
	return (ret);
}
