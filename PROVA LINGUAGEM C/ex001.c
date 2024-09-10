/*1. Crie uma função que receba um número inteiro de 1 a 10 e retorne 1 se o número
for primo. Caso contrário, não retorne nada. Você não pode usar laços de repetição,
por essa razão, limite a verificação a um conjunto pequeno de números para
verificar se são primos. Um número primo é divisível apenas por 1 e por ele mesmo.
(0.1 ponto)*/

#include <stdio.h>

int funcaocomp (int n);

int main () {

    int n;

    printf("Informe um numero de 1 a 10\n");
    scanf("%d", &n);

    (funcaocomp(n));  
}

int funcaocomp (int n) {

    if (n<1 || n>10) {
        printf("Numero invalido.\n");
        return;
    }
    
    if (n==2 || n==3 || n==5 || n==7) {
       printf("1"); 
    }
    else {
        return funcaoperg(n);
    }
}

int funcaoperg (int n) {

    printf("Informe um numero de 1 a 10\n");
    scanf("%d", &n);

return funcaocomp(n);
}