#include <stdio.h>
#define STOP '!' /*дает символу '!' символическое имя */
int main( )
{
	char ch;
	int count;
	while((ch=getchar()) != STOP) { /***10***/
		putchar(ch); /***11***/
		count++;
	}
	printf("\n Всего было прочитано %d символа.\n", count);
}
