#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    float nota1 ,nota2; 
    float media;

    printf("Digite o valor da sua primeira nota:");
    scanf("%f", &nota1);

    printf("Digite o valor da sua segunda nota:");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A sua media foi de: %.2f\n", media);
 
    printf("FIM DO PROGRAMA!!\n");

   return 0;   
    
}
    