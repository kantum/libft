/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 20:05:48 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/18 23:06:20 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*ret;
	
	i = 0;
	len = 0;
	while (s[len])
		len++;
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (s[i])
	{
		ret[i] = f(s[i]);
		i++;
	}
	return (ret);
}
