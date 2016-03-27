#include <stdio.h>
void main ()
{
        int x = 12;
        int p, q;


        p = &x; //peredaem v ukazatel' adress peremennoj x
        y = *p; // peredaem znachenie peremenoj po adresu iz x

        printf("x = %f, y = %f, p = %p\n", x, y, p);

        *p++;
        printf("x = %f, y = %f, p = %p\n", x, y, p);

        y=1+*p*y;
        printf("x = %f, y = %f, p = %p\n", x, y, p);
}
