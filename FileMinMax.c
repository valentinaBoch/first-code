#include <stdio.h>
main()
{
	FILE *InputFile;
	FILE *OutputFile;
	int N;
	int m[N];;
	char str[80];	
	int i;
	int min, max, maxN;
	
	InputFile = fopen("input.txt","r");
	OutputFile = fopen("ouput.txt","w");

	fscanf(InputFile, "%s", str);
        N=atoi(str);
        printf("N=%d\n",N);

	for (i=0; i<N; i++)
        {
                fscanf(InputFile, "%s", str);
                m[i]=atoi(str);
                printf("%d\n", m[i]);
        }

	min = m[0];
	max = m[0];

	for (i=0; i<N; i++)
	{
		if (min > m[i]) min = m[i];
		if (max < m[i]) max = m[i]; 
	}
	printf("min = %d, max = %d\n", min, max);
	maxN = max-min;
        fprintf(OutputFile, "max diff =%d",   maxN);

	fclose(InputFile);
	fclose(OutputFile);
}
