#include <stdio.h>
int main( )
{
	int ch;
	while ((ch=getchar()) != EOF)
	{
		if (ch == '\n') putchar(ch); 
		else putchar(ch+1);
	}
}
