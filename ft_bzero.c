#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	i;
	unsigned char	*tmp;

	i = 0;
	tmp = s;
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
	s = tmp;
}
