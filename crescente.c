#include <stdio.h>

int main()
{
int x, y, i; 
i = 2;
printf("Digite o primeiro numero\n");
scanf("%d", &x);
printf("Digite o segundo numero\n");
scanf("%d", &y);
while (x != y)
    {
        if (x > y)
        {
         printf("DECRESCENTE!\n");
        }
        else {
            printf ("CRESCENTE!\n");
        }
    
    printf("Digite o primeiro numero\n");
    scanf("%d", &x);
    printf("Digite o segundo numero\n");
    scanf("%d", &y);
    
    printf("Numero de rodadas foi de %d\n", i);
    ++i;
    
    }

    return 0;
}