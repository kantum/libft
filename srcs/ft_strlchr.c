#include "libft.h"

int			ft_strlchr(char *str, char c)
{
	int		i;

	i = 0;
	while (str && str[i] != c)
		i++;
	return (i);
}
