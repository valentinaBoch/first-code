/* пшеница*/
#include <stdio.h> 
#define NUMBER 64 /* число клеток на шахматной доске*/
#define CROP 7E14 /* весь урожай пшеницы, 
	выраженный в числе зерен*/
int main( )
{
	double current, total;
	int count =1;
	printf("КЛЕТКА   \tЧИСЛО \tСУММА ЗЕРЕН \tДОЛЯ\n");
	total = current = 1.0;/*начинаем с одного зерна*/
	printf("%4d %15.2e %13.2e %12.2e\n",count, 
		current, total, total/CROP);
	while(count < NUMBER) {
		count = count + 1;
		current = 2.0*current;
		/*удвоенное число зерен на следующей клетке */
		total = total +current; /* коррекция суммы*/
		printf ("%4d %15.2e %13.2e %12.2e\n",count, 
			current, total, total/CROP);
	}
}
