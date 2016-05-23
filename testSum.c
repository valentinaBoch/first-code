# include <stdio.h>

int ReadFromFie ();
void WriteToFie (int sum);

int main ()
{
	WriteToFie (ReadFromFie ());
	return 0;
}

int ReadFromFie ()
{
	int a, int b;
	FILE *InputFile;
	InputFile = fopen("input.txt","r");
	if (InputFile == NULL) 
        {
                printf ("ERROR! File \"input.txt\" not found.\n");
                exit(0);
        }

	fscanf(InputFile, "%d", &a);
	fscanf(InputFile, "%d", &b);
	fclose(InputFile);

	sum = a+b;

	return sum;
}

void WriteToFie (int sum)
{
	FILE *OutputFile;
	OutputFile = fopen("ouput.txt","w");
	if (OutputFile == NULL) 
    {
        printf ("ERROR! File \"output.txt\" not found.\n");
        exit(0);
    }
	fprintf(OutputFile, "%d\n", sum);
	printf("%d\n", sum);
	fclose(OutputFile);
}

