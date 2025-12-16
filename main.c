#include <limits.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	unsigned int		n1;
	unsigned int		n2;
	unsigned long long	ui;

	n1 = n2 = UINT_MAX;
	ui = n1 * (n2);
	printf("multi : %llu\n", ui);
	ui = n1 + n2;
	printf("sum : %llu\n", ui);
	return (0);
}
