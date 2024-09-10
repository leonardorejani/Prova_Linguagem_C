/*14. Elabore um programa que exiba uma mensagem de boas-vindas baseada no
turno do dia. O usuário deve informar o turno usando um número (1 para manhã, 2
para tarde, 3 para noite). O programa deve exibir uma mensagem apropriada para
cada turno e um erro para entradas inválidas. (0.2 ponto)*/

#include <stdio.h>

void comp (int n);

int main()
{
    int n;
    char m;
    printf("Informe o periodo! \n");
    printf("1- Manhã | 2- Tarde | 3- Noite\n");
    scanf("%d",&n);
    
   comp (n);
}

void comp (int n){
    
    switch (n){
        case 1:
            printf("Bom dia");
            break;
            
        case 2:
            printf("Boa Tarde");
            break;

        case 3: 
            printf("Boa Noite");
            break;

        default:
            printf("Periodo Invalido");
    }
    
}