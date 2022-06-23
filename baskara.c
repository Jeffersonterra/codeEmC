#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
  double a, b, c, delta, resposta1, resposta2, deltar;
  float num, raiz;
  printf ("Sua calculadora da formula de baskara! Segue aqui o modelo.\n Digite o coeficiente a.\nSendo ax^2+bx+c=0\nDigite o coeficiente a: ");
  /*ax²+bx+c=0*/
    scanf("%lf", &a); 
    printf("Digite o coeficiente b: ");
    scanf("%lf", &b); 
    printf("Digite o coeficiente c: " );
    scanf("%lf", &c); 
        delta= (b * b) - ( 4 * a * c); 
        printf ("Delta = %lf", delta);
        deltar = sqrt (delta);
        printf("Delta raiz : %lf", deltar);
        resposta1 = (-b + deltar)/2 * a;
        resposta2 = (-b - deltar)/2 * a;
        if (delta > 0) {
    printf ("\nD>0\nResposta um eh %lf", resposta1);
    printf ("\nResposta dois eh %lf", resposta2);
    printf ("\nO delta eh %lf\n", delta);
    printf ("\nO deltar eh %lf\n", deltar);

        }
        if (delta = 0){
            printf ("\nD=0\n So uma resposta");
    printf ("\nO delta eh %lf\n", delta);
    printf ("\nO deltar eh %lf\n", deltar);

        }
        if ( delta < 0){
        
        printf ("\nEsta equação nao possui respostas reais", resposta1);
      
        printf ("\nO delta eh %lf\n", delta);
        printf ("\nO deltar eh %lf\n", deltar);}
       
      
            printf("Digite um numero: que diremos sua raiz \t");
            scanf("%f", &num);
            raiz = sqrt(num);
            printf("Raiz de seu numero eh eh : \n");
            printf("%.2f", raiz);
   /* system("pause");*/
  return 0;
}
