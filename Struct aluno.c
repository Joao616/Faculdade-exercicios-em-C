#include <stdio.h>
#include <math.h>
#include <string.h>

struct Aluno{
      
     char nome[50];
     int idade;
     float mediaNotas;

};

int main() {
      

     struct Aluno aluno1;

     strcpy(aluno1.nome, "Joao Victor");
     aluno1.idade = 20;
     aluno1.mediaNotas = 9.0;

     printf("Nome: %s\n", aluno1.nome);
     printf("Idade: %d\n", aluno1.idade);
     printf("Media: %.2f\n", aluno1.mediaNotas);


    printf("FIM DO PROGRAMA!!\n");
     
    return 0;
}
