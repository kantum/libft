#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*tmp;
	const unsigned char		*so_tmp;

	i = 0;
	tmp = dst;
	so_tmp = (unsigned char *)src;
	while (i < n)
	{
		tmp[i] = so_tmp[i];
		i++;
	}
	dst = tmp;
	return (dst);
}
