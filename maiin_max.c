#include <stdio.h>
main()
{
	int m[3];
	m[0]=2;
	m[1]=3;
	m[2]=1;
	
	int i;
	int min, max;
	
	min = m[0];
	max = m[0];
	for (i=0; i<3; i++)
	{
		if (min > m[i]) min = m[i];
		if (max < m[i]) max = m[i]; 
	}
	printf("min = %d, max = %d\n", min, max);
}
