int	ft_isalnum(char c)
{
	if((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return(1);
	else
		return(0);
}
