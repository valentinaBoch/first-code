#include <stdio.h>
int abs (int);
int main ()
{
	int a, b, c, d, e, f;
	a = 20;
	b = 0;
	c = -12;
	d = abs (a);
	e = abs (b);
	f = abs (c);
	printf("abs(a) = %d, abs (b) = %d, abs (c) = %d", d, e, f);
}

int abs (int x)
{
	int y;
	y = (x<0) ? -x : x;
	return y;
}
