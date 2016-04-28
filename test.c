#include <stdio.h>

int main()
{
	//int n = 1;
	//	printf("%10d, %10d\n",n, n*n);

signed char c1 = 255; printf("c1=%d\n", c1); while (c1 > 200) { printf("c1=%d\n", c1--); };

unsigned char s = '0'; while(!('9' - s < 0)) printf("s=%c\n", s++);

//for(short i=0; ++i > 0; printf("i=%d\n", i));

char c = 255; do { printf("c=%d\n", c--); } while (c > 200);


}
