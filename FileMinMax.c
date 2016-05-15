#include <stdio.h>
int ReadFromFieDayNumber ();///int numDay);
void WriteToFieDayNumber (int MaxDiff);
int MaximumDiff(int numDay);

main()
{
	int DayNumber, MaxDiff;

	DayNumber = ReadFromFieDayNumber();	//читаем из файла за сколько дней 
	MaxDiff = MaximumDiff(DayNumber); 	//заполняем массив и находим максимальну разницу значений
	WriteToFieDayNumber(MaxDiff);           //пишем результат в файл
}

int ReadFromFieDayNumber ()
{
	int numDay;
	FILE *InputFile;
	InputFile = fopen("input.txt","r");
	if (InputFile == NULL) 
        {
                printf ("ERROR! File \"input.txt\" not found.\n");
                exit(0);
        }

	fscanf(InputFile, "%d", &numDay);
        printf("DayNumber=%d\n", numDay);
	fclose(InputFile);
	return numDay;
}



int MaximumDiff(int numDay)
{
	int min, max, maxDiff=0;
	int kurs[numDay];
	int i = 0;
	int ch;
	FILE *InputFile;
	InputFile = fopen("input.txt","r");
	
	while (ch = fgetc(InputFile) != '\n')
		while (i<numDay)
		{
			fscanf(InputFile, "%d", &kurs[i]);
			printf("kurs[%d]=%d\n", i, kurs[i]);
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
	printf("maxDiff = %d; numDay = %d\n", maxDiff, numDay);

	return maxDiff;
}

void WriteToFieDayNumber (int MaxDiff)
{
	FILE *OutputFile;
	OutputFile = fopen("ouput.txt","w");
	fprintf(OutputFile, "%d\n", MaxDiff);
	fclose(OutputFile);
}
