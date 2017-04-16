/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 15:15:48 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/16 15:15:50 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned char			*tmp;
	const unsigned char		*so_tmp;

	i = 0;
	tmp = dst;
	so_tmp = (unsigned char *)src;
	if (src < dst)
	{
		while (len)
		{
			tmp[i - len] = so_tmp[len];
			len--;
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
	dst = tmp;
	return (dst);
}
