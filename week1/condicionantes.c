#include <stdio.h>

int main (void)
{

/*if (x < y)
{
    printf("x é menor que y\n");
}
else
{
    printf("x não é menor que y\n");
}
*/
   int x = 10;
   int y = 20;

    if (x < y)
    {
        printf("x é menor que y\n");
    }
    else if (x > y)
    {
        printf("x é maior que y\n");
    }
    else //if (x == y) não precisa, economiza tempo e energia
    {
        printf("x é igual a y\n");
    }

}

//compilar: gcc condicionantes.c -lcs50 -o condicionantes

