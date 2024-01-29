#include <unistd.h>

void	ft_putchar(void)
{
	write(1, "Hello World!\n", 13);
}

int	main(void)
{
	ft_putchar();
	return 0;
}