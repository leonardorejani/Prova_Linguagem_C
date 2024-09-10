/*16. Desenvolva um programa que classifique o desempenho acadêmico de um
aluno com base em sua nota final. A nota deve ser informada pelo usuário e
classificada da seguinte forma:
● A (nota >= 9.0)
● B (nota >= 7.0 e < 9.0)
● C (nota >= 5.0 e < 7.0)
● D (nota < 5.0)
O programa deve exibir a classificação correspondente. Se a nota estiver fora do
intervalo de 0 a 10, o programa deve informar um erro. (0.2 ponto)*/

#include <stdio.h>

float jorge (float n1);

int main () {

    float n1; 

    printf("Informe a nota do aluno\n");
    scanf("%f", &n1);

    jorge(n1);
}

float jorge (float n1) {

    if (n1>=9.0 && n1<=10) {
        printf("O aluno tirou: A");
    }
    else if (n1>=7.0 && n1<9.0) {
        printf("O aluno tirou: B");
    }
    else if (n1>=5.0 && n1<7.0) {
        printf("O aluno tirou: C");
    }
    else if (n1<5.0) {
        printf("O aluno tirou: D");
    }
    else if (n1<0 || n1>10) {
        printf("Informacoes invalidas.");
    }
}