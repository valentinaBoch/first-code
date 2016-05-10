/* макроопределение с аргументами */ 
#define SQUARE(x) x*x
#define PR(x) printf("x равно %d.\n", x)
int main( )
{
	int x = 4; 	int z;
	z = SQUARE(x);
	PR(z); //16
	z = SQUARE(2); //4
	PR(z); //4
	PR(SQUARE(x));//16
	PR(SQUARE(x+2));//36
	PR(x);
	PR(100/SQUARE(2));
	PR(SQUARE(++x));
  //      printf("%d\n", ++x);//*(++x));
//	printf("%d\n", ++x);
	return 0;
}
