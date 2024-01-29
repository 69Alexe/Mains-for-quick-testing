#include <unistd.h>

void	ft_putchar(void)
{
	write(1, "z\n", 2);
}

int	main(void)
{
	ft_putchar();
	return 0;
}