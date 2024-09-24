#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
  
    float largura , altura, area , litrosTinta;

    printf("Qual altura da sua Parede:");
    scanf("%f", &altura);
    printf("Qual largura da sua Parede:");
    scanf("%f", &largura);
   

     area = largura * altura;

    printf("A area da parede e: %.2f m²\n", area);

     litrosTinta = area / 2;


    printf("A quantidade de tinta necessaria para pintar a parede e de %.2f litros.\n", litrosTinta);
    
     return 0;



}