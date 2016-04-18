/* Простые примеры директивы препроцессора */
#define TWO 2 /* можно использовать комментарии*/
#define MSG "Текст 1.\
Продолжение текста 1"
/* обратная косая черта продолжает определение на следующую строку */
#define FOUR TWO*TWO
#define PX printf("X равен %d.\n", x)
#define FMT "X равен %d.\n"
int main( )
{
	int x = TWO;
	PX;
	x = FOUR;
	printf(FMT,x);
	printf("%s\n",MSG);
	printf("TWO: MSG\n");
	return TWO;
}
