#include <stdio.h>
int main ()
{
	char ch;
	int i;
	float f1;
	
	f1=i=ch='A'; /****8****/
	printf("ch=%c, i=%d, f1=%2.2f\n", ch, i, f1);

	ch=ch+1; /****10****/
	i=f1=f1+2*ch; /****11****/
	f1=2.0*ch+i; /****12****/
	printf("ch=%c, i=%d, f1=%2.2f\n", ch, i, f1);

	ch=2.0e30; /****14****/
	printf ("Now ch=%c\n", ch);
}
