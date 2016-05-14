#include <stdio.h>

int main ()
{
	FILE *InputFile;
	int num[2];
	int i;
	InputFile = fopen("input.txt","r");
	while (fscanf(InputFile, "%d", num[i]) != EOF)
	{
		printf("%d\n", num[i]);
		i++;
	}	
	fclose(InputFile);
	return 0;
}
