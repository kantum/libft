#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	c_tmp;
	unsigned char	*s_tmp;
	
	i = 0;
	c_tmp = (unsigned char)c;
	s_tmp = (unsigned char *)s;
	while (i < n)
	{
		if (s_tmp[i] == c_tmp)
			return (&s_tmp[i]);
		i++;
	}
	return (NULL);
}
