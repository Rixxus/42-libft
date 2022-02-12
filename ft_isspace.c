int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' \
		|| c == '\f' || c == '\r' || c == ' ')
	{
		return (c);
	}
	return (0);
}
