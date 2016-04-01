#include <stdio.h>

main()
{
	float fahr, cel;
	int min, max, step;

	printf("Введите минимальную температуру в градусах Фарингейта: ");
	scanf ("%d", &min);
	printf("Введите максиимальную температуру в градусах Фарингейта: ");
	scanf ("%d", &max);
	
	step = 20;
	fahr = min;
	
	while (fahr <= max)
	{
		cel = 5*(fahr-32)/9;
		printf("%3.1f\t%6.2f\n", fahr, cel);
		fahr += step;
	}	

}
