/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 20:52:16 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/20 19:39:45 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ret;
	size_t	i;
	size_t	k;
	size_t	len;

	i = 0;
	k = 0;
	len = 0;
	while (s[len + 1])
		len++;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (len && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t'))
		len--;
	if (i > len)
	{
		if (!(ret = (char *)malloc(sizeof(char))))
			return (ret);
		ret = "";
		return (ret);
	}
	else
	{
		if (!(ret = (char *)malloc(sizeof(char) * (len - i + 1))))
			return (NULL);
	}
	while (i <= len)
	{
		ret[k] = s[i];
		i++;
		k++;
	}
	ret[k] = '\0';
	return (ret);
}
