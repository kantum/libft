/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 15:15:48 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/27 19:14:07 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned char			*tmp;
	const unsigned char		*so_tmp;

	i = 0;
	tmp = (unsigned char *)dst;
	so_tmp = (unsigned char *)src;
	if (src < dst)
	{
		while ((int)len > 0)
		{
			len--;
			tmp[len] = so_tmp[len];
		}
	}
	else
	{
		while (i < len)
		{
			tmp[i] = so_tmp[i];
			i++;
		}
	}
	return (dst);
}
