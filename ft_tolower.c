int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'B')
		return (c - 'A' + 'a');
	else
		return (c);
}
