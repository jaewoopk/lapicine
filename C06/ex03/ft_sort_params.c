#include <unistd.h>
#include <stdbool.h>

bool	ft_strcmp(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char		*tmp;
	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i],argv[j]))
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write (1, &argv[i][j], 1);
			j++;
		}
		i++;
		write (1, "\n", 1);
	}
}

bool	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (true);
		else if (s1[i] < s2[i])
			return (false);
		i++;
	}
	return (false);
}
