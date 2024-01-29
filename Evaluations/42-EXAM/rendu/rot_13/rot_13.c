
#include	<unistd.h>

void	swapper(char *str)
{
	int lenght;
	char	a;

	lenght = -1;
	while (lenght++, str[lenght] != '\0')
	{
		if (str[lenght] >= 'a' && str[lenght] <= 'm' || str[lenght] >= 'A' && str[lenght] <= 'M')
		{
			char a = (str[lenght] + 13);
			write(1, &a, 1);
		}
		else if (str[lenght] >= 'n' && str[lenght] <= 'z' || str[lenght] >= 'N' && str[lenght] <= 'Z')
		{
			char a = (str[lenght] - 13);
			write(1, &a, 1);
		}
		else 
		{
			write(1, &str[lenght], 1);
		}
	}
}

int	main(int argc, char **argv)
{
	if	(argc == 2)
	{
		swapper(argv[1]);
	}
	write(1, &"\n", 1);
	return(0);
}