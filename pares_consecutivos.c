#include <stdio.h>
int main()
{
int numero, numero2, sok;
numero = 1;
while (numero != 0)
{
numero2 = 0;
scanf ("%d", &numero);
sok = numero % 2;


        switch (sok)
        {
        case 1: 
    
        numero2 = (numero + 5) *5;
    
       
        printf ("\nn1   %d\n", numero2);
        
    
    
        break;

        default: numero2= (numero +4) * 5;
        printf ("\nn1    %d\n", numero2);
        break;
}
}


    return 0;
}