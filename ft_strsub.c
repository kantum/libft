/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 20:14:16 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/20 17:11:01 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s1, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (i < start)
		i++;
	if (!(ret = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	while (i < (start + len))
	{
		ret[k] = s1[i];
		k++;
		i++;
	}
	ret[k] = '\0';
	return (ret);
}
