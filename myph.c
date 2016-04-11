#include <stdio.h>
#define NUMBER 64

int main ()
{
	int count = 1;
	double grain,sum;
	grain = sum = 1.0;

	printf("КЛЕТКА\tЧИСЛО\n");
	printf("%3d\t%25.1f\n", count, grain);


	while (count < NUMBER)
	{
		count++;
		grain*=2;
		sum += grain;
		printf("%3d\t%25.1f\n", count, grain);
	}
	sum -= 1;
	printf("\nСУММА: %25.1f\n", sum);
}
