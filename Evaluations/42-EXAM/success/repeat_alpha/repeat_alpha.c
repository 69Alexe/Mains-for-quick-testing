
#include <unistd.h>

void	repeat_alpha(char *str)
{
	int lenght;
	
	lenght = -1;
	while (lenght++, str[lenght] != '\0')
	{
		if (str[lenght] == 'a')
			write(1, "a", 1);
		else if (str[lenght] == 'b')
			write(1, "bb", 2);
		else if (str[lenght] == 'c')
			write(1, "ccc", 3);
		else if (str[lenght] == 'd')
			write(1, "dddd", 4);
		else if (str[lenght] == 'e')
			write(1, "eeeee", 5);
		else if (str[lenght] == 'f')
			write(1, "ffffff", 6);
		else if (str[lenght] == 'g')
			write(1, "ggggggg", 7);
		else if (str[lenght] == 'h')
			write(1, "hhhhhhhh", 8);
		else if (str[lenght] == 'i')
			write(1, "iiiiiiiii", 9);
		else if (str[lenght] == 'j')
			write(1, "jjjjjjjjjj", 10);
		else if (str[lenght] == 'k')
			write(1, "kkkkkkkkkkk", 11);
		else if (str[lenght] == 'l')
			write(1, "llllllllllll", 12);
		else if (str[lenght] == 'm')
			write(1, "mmmmmmmmmmmmm", 13);
		else if (str[lenght] == 'n')
			write(1, "nnnnnnnnnnnnnn", 14);
		else if (str[lenght] == 'o')
			write(1, "ooooooooooooooo", 15);
		else if (str[lenght] == 'p')
			write(1, "pppppppppppppppp", 16);
		else if (str[lenght] == 'q')
			write(1, "qqqqqqqqqqqqqqqqq", 17);
		else if (str[lenght] == 'r')
			write(1, "rrrrrrrrrrrrrrrrrr", 18);
		else if (str[lenght] == 's')
			write(1, "sssssssssssssssssss", 19);
		else if (str[lenght] == 't')
			write(1, "tttttttttttttttttttt", 20);
		else if (str[lenght] == 'u')
			write(1, "uuuuuuuuuuuuuuuuuuuuu", 21);
		else if (str[lenght] == 'v')
			write(1, "vvvvvvvvvvvvvvvvvvvvvv", 22);
		else if (str[lenght] == 'w')
			write(1, "wwwwwwwwwwwwwwwwwwwwwww", 23);
		else if (str[lenght] == 'x')
			write(1, "xxxxxxxxxxxxxxxxxxxxxxxx", 24);
		else if (str[lenght] == 'y')
			write(1, "yyyyyyyyyyyyyyyyyyyyyyyyy", 25);
		else if (str[lenght] == 'z')
			write(1, "zzzzzzzzzzzzzzzzzzzzzzzzzz", 26);
		else if (str[lenght] == 'A')
			write(1, "A", 1);
		else if (str[lenght] == 'B')
			write(1, "BB", 2);
		else if (str[lenght] == 'C')
			write(1, "CCC", 3);
		else if (str[lenght] == 'D')
			write(1, "DDDD", 4);
		else if (str[lenght] == 'E')
			write(1, "EEEEE", 5);
		else if (str[lenght] == 'F')
			write(1, "FFFFFF", 6);
		else if (str[lenght] == 'G')
			write(1, "GGGGGGG", 7);
		else if (str[lenght] == 'H')
			write(1, "HHHHHHHH", 8);
		else if (str[lenght] == 'I')
			write(1, "IIIIIIIII", 9);
		else if (str[lenght] == 'J')
			write(1, "JJJJJJJJJJ", 10);
		else if (str[lenght] == 'K')
			write(1, "KKKKKKKKKKK", 11);
		else if (str[lenght] == 'L')
			write(1, "LLLLLLLLLLLL", 12);
		else if (str[lenght] == 'M')
			write(1, "MMMMMMMMMMMMM", 13);
		else if (str[lenght] == 'N')
			write(1, "NNNNNNNNNNNNNN", 14);
		else if (str[lenght] == 'O')
			write(1, "OOOOOOOOOOOOOOO", 15);
		else if (str[lenght] == 'P')
			write(1, "PPPPPPPPPPPPPPPP", 16);
		else if (str[lenght] == 'Q')
			write(1, "QQQQQQQQQQQQQQQQQ", 17);
		else if (str[lenght] == 'R')
			write(1, "RRRRRRRRRRRRRRRRRR", 18);
		else if (str[lenght] == 'S')
			write(1, "SSSSSSSSSSSSSSSSSSS", 19);
		else if (str[lenght] == 'T')
			write(1, "TTTTTTTTTTTTTTTTTTTT", 20);
		else if (str[lenght] == 'U')
			write(1, "UUUUUUUUUUUUUUUUUUUUU", 21);
		else if (str[lenght] == 'V')
			write(1, "VVVVVVVVVVVVVVVVVVVVVV", 22);
		else if (str[lenght] == 'W')
			write(1, "WWWWWWWWWWWWWWWWWWWWWWW", 23);
		else if (str[lenght] == 'X')
			write(1, "XXXXXXXXXXXXXXXXXXXXXXXX", 24);
		else if (str[lenght] == 'Y')
			write(1, "YYYYYYYYYYYYYYYYYYYYYYYYY", 25);
		else if (str[lenght] == 'Z')
			write(1, "ZZZZZZZZZZZZZZZZZZZZZZZZZZ", 26);
		else 
			write(1, &str[lenght], 1);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	else
	{
		write(1, "\n", 1);
	}
	return 0;
}