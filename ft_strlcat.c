int	ft_strlcat(char *dest, char *src, size_t destsize)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (dest[j] && j < destsize)
		j++;
	return (i + j);
}
