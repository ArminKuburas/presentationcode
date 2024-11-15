#include <stdio.h>

void	boil_water(void)
{
	printf("Boiling water\n");
}

void	grind_coffee_beans(void)
{
	printf("Grinding coffee beans\n");
}

void	make_coffee(void)
{
	printf("Making coffee\n");
}

int	main(void)
{
	int i = 0;

	i = i + 2;
	boil_water();
	grind_coffee_beans();
	make_coffee();
}
