#include <stdio.h>

unsigned int ReadFromFieDayNumber ();///int numDay);
void WriteToFieDayNumber (unsigned int MaxDiff);
unsigned int MaximumDiff(unsigned int numDay);

main()
{
	unsigned int DayNumber, MaxDiff;

	DayNumber = ReadFromFieDayNumber();	//читаем из файла за сколько дней 
	MaxDiff = MaximumDiff(DayNumber); 	//заполняем массив и находим максимальну разницу значений
	WriteToFieDayNumber(MaxDiff);           //пишем результат в файл
}

unsigned int ReadFromFieDayNumber ()
{
	unsigned int numDay;
	FILE *InputFile;
	InputFile = fopen("input.txt","r");
	if (InputFile == NULL) 
        {
                printf ("ERROR! File \"input.txt\" not found.\n");
                exit(0);
        }

	fscanf(InputFile, "%d", &numDay);
	fclose(InputFile);

//	printf ("numDay = %ld\n",numDay);

	return numDay;
}

unsigned int MaximumDiff(unsigned int numDay)
{
	unsigned int min, max, maxDiff=0;
	unsigned int kurs[numDay];
	int i = 0;
	int ch;
	FILE *InputFile;
	InputFile = fopen("input.txt","r");

	for (i=0; i<numDay; i++)
//	{
		kurs[i]=0;
//              printf ("kurs[%d] = %ld\n", i, kurs[i]);
//      }

	while (ch = fgetc(InputFile) != '\n')
		for (i=0; i<numDay; i++)
//		{
			fscanf(InputFile, "%d", &kurs[i]);
//
//			printf ("kurs[%d] = %ld\n", i, kurs[i]);
//
//		}

    fclose(InputFile);
	min = max = kurs[0];
	for (i=0; i<numDay; i++)
	{
		if (min > kurs[i]) min = kurs[i];
       	if (max < kurs[i]) max = kurs[i];
	}

	maxDiff = max - min;
//	printf ("maxDiff = %ld\n", maxDiff);	
	return maxDiff;
}


void WriteToFieDayNumber (unsigned int MaxDiff)
{
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
}
