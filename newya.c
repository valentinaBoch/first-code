#include <stdio.h>

int main()
{
	unsigned int DayNumber, MaxDiff;

	FILE *InputFile;
	InputFile = fopen("input.txt","r");
	if (InputFile == NULL) 
    {
                printf ("ERROR! File \"input.txt\" not found.\n");
                exit(0);
    }

	fscanf(InputFile, "%d", &DayNumber);

	unsigned int min, max, maxDiff=0;
	unsigned int kurs[DayNumber];
	int i = 0;
	int ch;

	//while (ch = fgetc(InputFile) != '\n')
		for (i=0; i<DayNumber; i++)
			fscanf(InputFile, "%d", &kurs[i]);

    fclose(InputFile);
	min = max = kurs[0];
	for (i=0; i<DayNumber; i++)
	{
		if (min > kurs[i]) min = kurs[i];
       	if (max < kurs[i]) max = kurs[i];
	}

	maxDiff = max - min;

	FILE *OutputFile;
	OutputFile = fopen("ouput.txt","w");
	if (OutputFile == NULL) 
    {
        printf ("ERROR! File \"output.txt\" not found.\n");
        exit(0);
    }
	fprintf(OutputFile, "%d\n", MaxDiff);
	printf("%d\n", MaxDiff);
	fclose(OutputFile);	

  	return 0;
}
