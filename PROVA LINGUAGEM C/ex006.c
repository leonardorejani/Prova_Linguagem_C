/*6. Elabore uma função que receba a nota de um aluno (de 0 a 10) e classifique se
ele foi aprovado ou reprovado. A aprovação ocorre se a nota for 7 ou superior, e
reprovação caso contrário. A função deve exibir mensagens para os dois casos. (0.3
ponto)*/

#include <stdio.h>

float nota (float nt);

int main () {

    float nt;

    printf("Informe a nota do aluno (de 0 a 10)\n");
    scanf("%f", &nt);

    nota (nt); 
}

float nota (float nt) {

    if (nt>=7) {
        printf("Aluno APROVADO");
    }
    else {
        printf("Aluno REPROVADO");
    }
}