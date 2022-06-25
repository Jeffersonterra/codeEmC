#include <stdio.h>
int main()
{
    /*Digite 3 distancias e o sistema dira qual a maior das 3*/
    double y, x, z;
printf ("Digite as tres distancias");
printf ("\nDigite a primeira distancia (y)");
scanf("%lf", &y);
printf ("Digite a segunda distancia (x)");
scanf("%lf", &x);
printf ("Digite a terceira distancia (z)");
scanf("%lf", &z);



if (y > x){

    if (y > z)
    {
       printf ("Vencedor eh Y");
    }
    else {
        printf ("Vencedor eh Z");
    }
}
else {
    if (x > z)
    {
       printf ("Vencedor eh X");
    }
    else {
        printf ("Vencedor eh Z");
    }
}



return 0;
}