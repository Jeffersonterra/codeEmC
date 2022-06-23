#include <stdio.h>
int main ()
{
int hora;
printf("Digite uma hora do dia: \n");
scanf("%d", &hora);
/*comando if else como exemplificado compilar com f6*/
    if (hora < 12){
    printf ("Bom dia!\n");

    }
    else if (hora > 24){
        printf("Horario incompativel tente novamente\n");
    }
    else{
    printf("Boa tarde!\n");   
    }
    printf("Digite qualquer coisa para finalizar o codigo =D\n");
    scanf("%d", &hora);
   return 0;


}