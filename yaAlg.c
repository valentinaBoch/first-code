#include <stdio.h>
#include <stdlib.h>

int main ()
{
        FILE *InputFile;
 	FILE *OutputFile;
	int N; 
        char str[80];
	int kurs[N];
        int i;

	int min=0, max=0, maxN=0;

        InputFile = fopen("input.txt","r");
	OutputFile = fopen("output.txt","w");

	fscanf(InputFile, "%s", str);
	N=atoi(str);

	for (i=0; i<N; i++)
	{
		fscanf(InputFile, "%s", str);
		kurs[i]=atoi(str);
	}

	min=kurs[0];
	max=kurs[0];
	for (i=0; i<N; i++)
	{
		if (kurs[i]<min) min=kurs[i];
		if (kurs[i]>max) min=kurs[i];
	}

	maxN=max-min;
	fprintf(OutputFile, "%d\n", maxN);

	fclose(OutputFile);
        fclose(InputFile);
	return 0;
}
