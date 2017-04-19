/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 20:54:41 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/19 15:21:07 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	i;	
	size_t	len;	
	int		sign;
	char	*ret;

	i = 0;
	len = 0;
	sign = 1;
	if (n < 0 && n != -2147483648)
		sign = -1;
	else if (n == -2147483648)
	{
		if (!(ret = (char *)malloc(sizeof(char) * 12)))
			return (0);
	}

	while (n /= 10)
		len++;
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
}
