
#include <unistd.h>

void	ft_write(char *ptr)
{
	int i;

	i = 0;
	while ( *(ptr + i) != 0)
	{
		if (*(ptr + i) == 'a')
		{
			write(1, "a", 1);
			write(1 , "\n", 1);
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	char *error = "ERROR LOL";
	int a;

	a = 0;
	if (argc > 2 || argc == 1)
	{
		while (*(error + a) != 0)
		{
			write(1, (error +a), 1);
			a++;
		}
	}
	else
	ft_write(*(argv + 1));
	return 0;
}