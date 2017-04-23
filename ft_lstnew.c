/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 19:11:44 by qdurot            #+#    #+#             */
/*   Updated: 2017/04/23 19:23:40 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*first;

	first = (t_list *)malloc(sizeof(t_list));
	if (first)
	{
		if (content)
		{
			first->content = (void *)content;
			first->content_size = content_size;
		}
		else
		{
			first->content = NULL;
			first->content_size = 0;
		}
		first->next = NULL;
	}
	return (first);
}
