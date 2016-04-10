#include <stdio.h>

int main()
{
	int n = 1;
	while (n < 11)
	{
		printf("%10d, %10d\n",n, n*n);
		n++;
	}
	return 0;
}
