#include <stdio.h>
int ReadFromFieDayNumber ();///int numDay);
void WriteToFieDayNumber (int MaxDiff);
int MaximumDiff(int numDay);

main()
{
	unsigned long int DayNumber, MaxDiff;

	DayNumber = ReadFromFieDayNumber();	//читаем из файла за сколько дней 
	MaxDiff = MaximumDiff(DayNumber); 	//заполняем массив и находим максимальну разницу значений
	WriteToFieDayNumber(MaxDiff);           //пишем результат в файл
}

int ReadFromFieDayNumber ()
{
	unsigned long int numDay;
	FILE *InputFile;
	InputFile = fopen("input.txt","r");
	if (InputFile == NULL) 
        {
                printf ("ERROR! File \"input.txt\" not found.\n");
                exit(0);
        }

	fscanf(InputFile, "%d", &numDay);
	fclose(InputFile);
	return numDay;
}

int MaximumDiff(unsigned long int numDay)
{
	unsigned long int min, max, maxDiff=0;
	unsigned long int kurs[numDay];
	int i = 0;
	int ch;
	FILE *InputFile;
	InputFile = fopen("input.txt","r");
	
	while (ch = fgetc(InputFile) != '\n')
		while (i<numDay)
		{
			fscanf(InputFile, "%d", &kurs[i]);
			i++;
		}

       	fclose(InputFile);
	min = max = kurs[0];
	for (i=0; i<numDay; i++)
	{
		if (min > kurs[i]) min = kurs[i];
       	        if (max < kurs[i]) max = kurs[i];
	}

	maxDiff = max - min;
	
	return maxDiff;
}

void WriteToFieDayNumber (unsigned long int MaxDiff)
{
	FILE *OutputFile;
	OutputFile = fopen("ouput.txt","w");
	if (OutputFile == NULL) 
        {
                printf ("ERROR! File \"output.txt\" not found.\n");
                exit(0);
        }
	fprintf(OutputFile, "%ld\n", MaxDiff);
	printf("%ld\n", MaxDiff);
	fclose(OutputFile);
}
