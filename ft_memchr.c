/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 15:15:54 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/16 15:15:59 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	c_tmp;
	unsigned char	*s_tmp;

	i = 0;
	c_tmp = (unsigned char)c;
	s_tmp = (unsigned char *)s;
	while (i < n)
	{
		if (s_tmp[i] == c_tmp)
			return (&s_tmp[i]);
		i++;
	}
	return (NULL);
}
