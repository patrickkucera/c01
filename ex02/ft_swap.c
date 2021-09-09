#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/* int	main(void)
{
	int a = 1;
	int b = 2;

	printf("old A %d\n", a);
	printf("old B %d\n\n", b);
	ft_swap(&a,&b);
	printf("new A %d\n", a);
	printf("new B %d\n", b);

	return (0);
} */
