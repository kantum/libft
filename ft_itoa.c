/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 20:54:41 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/20 23:21:20 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		k;
	char	*tmp;

	i = 0;
	k = 0;
	while (str[k])
		k++;
	while (i < k)
	{
		tmp[i] = str[i];
		i++;
	}
	return (tmp);
}

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	len;
	char	*ret;

	i = 0;
	len = 0;
	if (n == -2147483648)
	{
		if (!(ret = (char *)malloc(sizeof(char) * 12)))
			return (0);
		while (n /= 10)
	}
	else if (n < 0)
	{
	}
	else
	{
	}
	return (ret);
}
