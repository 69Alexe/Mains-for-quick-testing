#include <unistd.h>

void	ft_putchar(void)
{
	write(1, "9876543210\n", 11);
}

int	main(void)
{
	ft_putchar();
	return 0;
}