/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 20:52:16 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/22 18:14:54 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	k;
	size_t	len;
	char	*ret;

	i = 0;
	k = 0;
	len = (ft_strlen(s) - 1);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (len && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t'))
		len--;
	if (i > len)
		return (ret = "");
	else
	{
		if (!(ret = (char *)malloc(sizeof(char) * (len - i + 1))))
			return (NULL);
	}
	while (i <= len)
		ret[k++] = s[i++];
	ret[k] = '\0';
	return (ret);
}
