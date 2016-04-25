/* Реализация работы калькулятора. Сначала задается 
число - сколько раз нужно подсчитать. Вводятся 
левый операнд, операция, правый операнд. Оператор 
выбора определяет, какой оператор должен работать. 
Результат выводится на экран. */
#include <stdio.h>
#include <ncurses.h>
#include <pthread.h>

void clrscr(void);

int main ()
{
	float a, b;
	char opr;
	float result=0;
	int I,i=0;
	clrscr();

	printf("Сколько раз будете считать?:\n");
	scanf("%d",&I);
	printf("Введите операнд, операцию, операнд:\n");
	while(i<I) 
	{
		i++;
    		scanf("%2.2f%c%2.2f",&a,&opr,&b);
    		switch(opr) 
		{
			case '+': result=a+b; break; 
			case '-': result=a-b; break; 
			case '*': result=a*b; break; 
			case '/': result=a/b; break; 
			default:
			        printf("Ошибка. Неверен знак операции "); 
		        exit(1); /* функция берется из заголовочного файла process.h*/
    		}
    		printf("Результат равен %.2f\n",result); 
  
  		if (i<I) printf("Введите операнд, операцию, операнд\n"); 
		else
    		{
      			printf("Конец работы\n");    /* текст печатается красным цветом*/
    		}
  	}
	getchar ();
	exit(0); /* функция берется из заголовочного файла process.h */
}

void clrscr(void)
{
    system("clear");
}
