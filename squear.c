#include <stdio.h>
double square (double, double, double);

int main()
{
	double a, b, c, sq;
	a = b = c = 0;
	printf("please, enter sides's lenght\na: ");
	scanf("%lf", &a);
	printf("b: ");
	scanf ("%lf", &b);
	printf("c: ");
        scanf ("%lf", &c);
	sq = square(a, b, c);
	printf ("square = %lf", sq);
	return 0;
}
double square(double a, double b, double c)
{
	if ((a + b > c) && (a + c > b) && (b + c > a) && (a != 0) && (b != 0) && (c != 0))
	{
		double p, square;
		p = (a + b + c)/2;
		square = sqrt (p * (p - a) * (p - b) * (p - c));
		return square;
	}
	else
	{
		printf("Incorrect data!");
		return -1;
	}
}
