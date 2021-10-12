#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size);

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;

	if (sizeof(*addr) == 1)
		
	i = 0;
	while (addr[i])
	{
		if (addr[i] >= 32 && addr[i] <= 126)
			write (1, &(addr[i]), 1);
		else
			write (1, ".", 1);
	}
	return (addr);
}
