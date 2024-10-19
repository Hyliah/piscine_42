#include <unistd.h>

void rush( int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;


	while (i < y)
		{
			while (j < x)
			{
				write (1, "P", 1);
				j++;
			}
			write (1, "\n", 1);
			j = 0;
			i++;
		}

}

int	main(void)
{
	rush(3, 5);
}


