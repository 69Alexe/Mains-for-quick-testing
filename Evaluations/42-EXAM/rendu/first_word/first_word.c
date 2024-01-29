#include <unistd.h>

void	first_word(char *str)
{
	int lenght;

	lenght = -1;
	while (lenght++, str[lenght] != '\0')
	{
		if (str[lenght] >= 'a' && str[lenght <= 'z'] || str[lenght] >= 'A' && str[lenght] <= 'Z' || str[lenght] == ',')
		{
			write(1, &str[lenght], 1);
			if (str[lenght + 1] == ' ' || str[lenght + 1] == '\t')
			{
				break;
			}
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		first_word(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}