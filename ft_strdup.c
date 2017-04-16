/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 15:19:44 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/16 15:19:46 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ret;

	i = 0;
	if (!(ret = (char *)malloc(ft_strlen(s1) * (sizeof(*s1)))))
		return (NULL);
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	ret[i] = s1[i];
	return (ret);
}
