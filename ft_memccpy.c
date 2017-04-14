#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*so_tmp;

	i = 0;
	tmp = dst;
	so_tmp = (unsigned char *)src;
	if (src > dst)
	{
		while (len)
		{
			tmp[len] = so_tmp[len];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			tmp[i] = so_tmp[i];
			i++;
		}
	}
	dst = tmp;
	return (dst);
}
