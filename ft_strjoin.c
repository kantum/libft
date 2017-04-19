/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 20:42:17 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/19 15:54:30 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;
	char	*ret;

	i = 0;
	s1_len = 0;
	s2_len = 0;
	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;
	if (!(ret = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (0);
	ret[s1_len + s2_len + 1] = '\0';
	while (s2_len--)
		ret[s1_len + s2_len] = s2[s1_len + s2_len];
	while (s1_len--)
		ret[s1_len] = s1[s1_len];
	return (ret);
}
