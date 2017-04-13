#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	while (dst[i])
	{
		tmp[i] = dst[i];
		i++;
	}
	while (src[j] && j < size - 1)
	{
		tmp[i] = src[j];
		i++;
		j++;
	}
	tmp[i] = '\0';
	dst = tmp;
	return (i + j);
}
