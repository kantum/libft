#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ret;

	i = 0;
	if (!(ret = (char *)malloc(ft_strlen(s1) * (sizeof(*s1)))))
		return (NULL);
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	ret[i] = s1[i];
	return (ret);
}
