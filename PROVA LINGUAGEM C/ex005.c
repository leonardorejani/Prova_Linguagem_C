/*5. Crie uma função que receba a idade de uma pessoa e verifique se ela é maior de
idade (18 anos ou mais). A função deve exibir uma mensagem diferente para os
casos em que a pessoa é maior ou menor de idade. (0.3 ponto)*/

#include <stdio.h>

int main () {

    int id;

    printf("Informe sua idade\n");
    scanf("%d", &id);

    idade(id);

}

int idade (int id) {

    if (id>=18) {
        printf("Ja pode ser preso, hein!");
    }
    else {
        printf("E ta na facul? Olooco, hein!");
    }
}