#include <stdio.h>

void clrscr(void);

int main ()
{
	char operation;
	float left= 0, right= 0, result=0;
	clrscr();

	printf("Welcome to programm \"My Calculator!\"\n");
	printf("Please, type left operabd: ");
	scanf("%.2f",&left);
	printf("\nPlease, change operation: +, -, *, /: ");
	scanf("%c",&operation);
	printf("\nPlease, type right operabd: ");
	scanf("%.2f",&right);

/*	while((operation )!= EOF)
	{
		switch (operation)
		{
			case '+': result=1; continue;
                        case '-': result=2; break;
                        case '*': result=3; break;
                        case '/': result=4; break;
                        default:
                        {
			       	printf("Ошибка. Неверен знак операции\n");
				exit(1);
			}
		}
		printf("Результат равен %.2f\n",result);
		operation = getchar();
	}*/
}

void clrscr(void)
{
    system("clear");
}

