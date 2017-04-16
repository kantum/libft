/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 15:19:15 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/16 15:19:21 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*tmp;
	const unsigned char		*so_tmp;

	i = 0;
	tmp = dst;
	so_tmp = (unsigned char *)src;
	while (i < n)
	{
		if (so_tmp[i] == c)
		{
			tmp[i] = so_tmp[i];
			dst = tmp;
			return ((void *)&tmp[i + 1]);
		}
		else
			tmp[i] = so_tmp[i];
		i++;
	}
	dst = tmp;
	return (NULL);
}
