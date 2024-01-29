int	ft_strlen(char *str)
{
	int	lenght;

	lenght = -1;
	while (lenght++, str[lenght] != '\0')
		;
	return(lenght);
}