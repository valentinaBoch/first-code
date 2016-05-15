#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int m[10];
	int min, max;
	int i;
	for (i=0; i <10; i++) 
	{
		m[i]=rand() % 10000;
		printf("%d\n", m[i]);
	}

	for (i=0; i <10; i++)
		if (m[i]<m[i+1]) min=m[i];
	printf("\nmin = %d\n",min);

	for (i=0; i <10; i++)
                if (m[i]>m[i+1]) max=m[i];
        printf("\nmin = %d\n",max);

	return 0;
}
