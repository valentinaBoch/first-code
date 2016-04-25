/*подсчет строк */
#include <stdio.h>
main( )
{
	int ch;
	int line_count=0;
	while((ch = getchar( )) != EOF)
		if(ch == '\n') line_count++;
	printf("Мы насчитали %d строк. \n", line_count);
}
