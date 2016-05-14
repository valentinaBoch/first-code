#include <stdio.h>
#include <stdlib.h>

int main ()
{
        FILE *InputFile;
 	FILE *OutputFile;
	int N; 
        char str[80];
	int kurs[N];
        int i, j;

	int min, max, maxN=0;

        InputFile = fopen("input.txt","r");
	OutputFile = fopen("output.txt","w");

	fscanf(InputFile, "%s", str);
	N=atoi(str);
	printf("N=%d\n",N);

	for (i=0; i<N; i++)
	{
		fscanf(InputFile, "%s", str);
		kurs[i]=atoi(str);
		printf("%d\n", kurs[i]);
	}

	min=kurs[0];
	max=kurs[0];
	
/*	i=0;
	while (i<=N)
	{
		if (min > kurs[i]) min = kurs[i];
		if (max < kurs[i]) max = kurs[i];
		i++;
	}
*/
	for (i=0;i<N; i++)
 	{
                if (min > kurs[i]) min = kurs[i];
                if (max < kurs[i]) max = kurs[i];
//                i++;
        }


/*	{
		if (max < kurs[i]) 
		{
			max = kurs[i];
		}
		else 
			if (max > kurs[i]) {		
				printf("%d\n", kurs[i]);
			}
	}*/
//	for (j=0; j<N; j++)
//		if (kurs[j]>max) max=kurs[j];
	

	printf("\nmin = %d; max = %d\n", min, max);
	maxN=max-min;
	fprintf(OutputFile, "%d\n", maxN);

	fclose(OutputFile);
        fclose(InputFile);
	return 0;
}
